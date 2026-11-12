#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        vector<int> left,right;
        left.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]==left.back()){
                right.push_back(arr[i]);
            }
            else left.push_back(arr[i]);
        }
        reverse(right.begin(),right.end());

        int distinct = 0;
        int duplicateDistinct = 0;

        for(int i = 0; i < n; ) {
            int j = i;

            while(j < n && arr[j] == arr[i]) {
                j++;
            }

            distinct++;

            if(j - i >= 2) {
                duplicateDistinct++;
            }

            i = j;
        }

        int ans = distinct + duplicateDistinct;
        cout << ans << '\n';

        for(int x:left){
            cout<<x<<" ";
        }
        for(int x:right){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        cout<<maxi-mini+1<<endl;
    }

    return 0;
}
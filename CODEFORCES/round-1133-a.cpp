#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a;
        int k;
        cin>>a>>k;
        vector<int> arr1(a);
        vector<int> arr2(a);
        int even1=0;
        int odd1=0;
        for(int i=0;i<a;i++){
            cin>>arr1[i];
            if(arr1[i]%2==0) even1++;
            else odd1++;
        }
        
        int even2=0;
        int odd2=0;
        for(int i=0;i<a;i++){
            cin>>arr1[i];
            if(arr1[i]%2==0) even2++;
            else odd2++;
        }

        if(k%2==0){
            if(odd1>=odd2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(even1>=even2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        
    }

    return 0;
}
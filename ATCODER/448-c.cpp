#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        long long mini=LONG_LONG_MAX;
        vector<bool> removed(n+1,false);
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            removed[x]=true;
        }
        for(int j=1;j<=n;j++){
            if(!removed[j]) mini=min(mini,a[j-1]);
        }
        cout<<mini<<endl;
    }

}
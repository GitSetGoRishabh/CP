#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<long long> b(n);
    vector<long long> c(m);

    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    vector<long long> quantity(m,0);
    for(int i=0;i<n;i++){
        quantity[a[i]-1]+=b[i];
    }
    long long ans=0;
    for(int i=0;i<m;i++){
        if(quantity[i]<=c[i]) ans+=quantity[i];
        else ans+=c[i];
    }
    cout<<ans<<endl;
}
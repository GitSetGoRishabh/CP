#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> wish(n);

    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        wish[i].resize(l);
        for(int j=0;j<l;j++){
            cin>>wish[i][j];
        }
    }
    
    unordered_map<int,int> freq(m);
    for(int i=0;i<n;i++){
        int flag=0;
        for(int x:wish[i]){
            freq[x]++;
            if(freq[x]==1) {
                cout<<x<<endl;
                flag=1;
                break;
            }
            
        }
        if(flag==0) cout<<0<<endl;

    }
    
    
}
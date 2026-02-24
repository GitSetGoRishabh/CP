#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int counto=0;
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            ans[i]+=s;
            if(ans[i][i]=='0') ans[i][i]='1';
            else ans[i][i]='0';
            
        }

        if(n==1){
            if(ans[0][0]=='0') cout<<0<<endl;
            else cout<<1<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]=='1') counto++;
            }
        }
        
        cout<<counto<<endl;
        
    }
}
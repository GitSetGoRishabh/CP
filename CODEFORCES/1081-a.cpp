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
        string ans="";
        int j=n-1;
        int count=0;
        while(j>0 && s[j]!=s[j-1]){
            j--;
            count++;
        }
        int anscount=0;
        ans+=s.substr(j);
        ans+=s.substr(0,j);
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=ans[i-1]){
                anscount++;
            }
        }
        cout<<anscount+1<<endl;
    }
}
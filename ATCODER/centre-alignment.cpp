#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=INT_MIN;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        int size=v[i].size();
        m=max(m,size);
    }

    for(int i=0;i<n;i++){
        int dots=m-v[i].size();
        for(int j=0;j<dots/2;j++){
            cout<<".";
        }
        cout<<v[i];
        for(int j=0;j<dots/2;j++){
            cout<<".";
        }
        cout<<endl;
    }
    
}
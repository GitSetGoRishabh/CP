#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int flag1=0;
        int flag2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==67) flag2=1;
        }
        if(flag2==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
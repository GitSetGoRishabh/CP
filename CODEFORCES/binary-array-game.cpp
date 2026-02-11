#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int countone=0;
        int countzero=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }

        for(int i=0;i<n;i++){
            if(arr[i]==0) countzero++;
            else countone++;
        }

        if(countone>=countzero) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
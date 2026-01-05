#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        unordered_map<int,int> freq;
        bool found=false;

        for(int x:arr){
            freq[x]++;
            if(freq[x]>=2){
                found=true;
                break;
            }
        }
        if(found) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
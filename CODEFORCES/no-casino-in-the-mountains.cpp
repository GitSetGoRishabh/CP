#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=INT_MIN;
        int count=0;
        int i=0;
        int j=0;
        while(j<=n){
            if(arr[i]!=0){
                i++;
                j++;
            }
            else{
                
            }
            if(j-i+1==k){
                count++;
                j++;
                i=j;
            }
        }
        cout<<count<<endl;
    }
}
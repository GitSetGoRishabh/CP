#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int volume=0;
    int playing=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            volume++;
        }
        else if(arr[i]==2){
            if(volume>=1){
                volume--;
            }
        }
        else if(arr[i]==3){
            if(playing==0) playing=1;
            else playing=0;
        }
        if(volume>=3 && playing==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
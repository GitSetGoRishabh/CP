#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    int i=n;
    while(sum<k){
        sum+=i;
        i++;
    }
    cout<<i-n-1<<endl;
}
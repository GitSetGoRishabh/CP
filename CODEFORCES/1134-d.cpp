#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count=0;
        while(true){
            char maxi='a';
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]){
                    maxi=max(maxi,max(s[i],s[n-i-1]));
                }
            }
            if(maxi=='a') break;
            
            for(int i=0;i<n;i++){
                if(s[i]==maxi){
                    s[i]--;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
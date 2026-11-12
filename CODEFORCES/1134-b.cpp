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
        char curr='R';

        for(int i=0;i<n;i++){
            if(curr!=s[i]){
                count++;
                curr=s[i];
            }
            if(curr=='R'){
                curr='B';
            }
            else curr='R';
        }
        cout<<count<<endl;
    }

    return 0;
}
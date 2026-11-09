#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;

        string ans;
        ans+=s[0];
        string size=to_string(s.size()-2);
        ans+=size;
        ans+=s[s.size()-1];
        
        if(s.size()>10) cout<<ans<<endl;
        else cout<<s<<endl;

    }

    return 0;
}
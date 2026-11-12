#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int ans=0;
    while (t--) {
        int count=0;
        for(int i=0;i<3;i++){
            int n;
            cin>>n;
            if(n==1) count++;

        }
        if(count>=2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
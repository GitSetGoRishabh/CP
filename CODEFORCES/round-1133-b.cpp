#include <bits/stdc++.h>
using namespace std;
int query(int l,int r){
    cout<<"? "<<l<<" "<<r<<endl;
    cout.flush();

    int res;
    cin>>res;

    if(res==-1) exit(0);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int ones=query(1,n);

        if(ones==0 || ones==n){
            cout<<"! NO"<<endl;
            cout.flush();
            continue;
        }

        int count=query(1,ones);
        if(count==ones) cout<<"! NO"<<endl;
        else cout<<"! YES"<<endl;
        cout.flush();
    }

    return 0;
}
#include <bits/stdc++.h>
#define fi(n) for(int i = 1; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    string s;
    cin>>s;
    ll out = 0;
    if(s[0]=='0')
        out++;
    fi(s.length()){
        if(s[i]!=s[i-1])
            out++;
    }
    cout<<out<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define fi(n) for(ll i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    ll n;
    cin>>n;
    ll ans = 1;
    if(n==1){
        cout<<3<<endl;
        return;
    }
    if(n==2){
        cout<<15<<endl;
        return;
    }
    cout<<1;
    fi(n-2){
        cout<<0;
    }
    cout<<5<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    ll n, i=11;
    cin>>n;
    ll ans = n;
    while(i<=n){
        //cout<<i<<' ';
        if(n%i==0){
            ans = (n/i);
        }
        i=i*10;
        i++;
    }
    cout<<ans<<'\n';
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
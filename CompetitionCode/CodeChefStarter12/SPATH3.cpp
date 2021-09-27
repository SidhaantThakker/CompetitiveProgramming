#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

ll manhattan(ll n, ll m, ll x, ll y){
    return ((n+m-2)*x);
}

ll diagonal(ll n, ll m, ll x, ll y){
    return ((n-1)*y) + ((m-n)*x);
}

ll onlydiagonal(ll n, ll m, ll x, ll y){
    return ((n-1)*y) + (((m-n)/2)*2*y) + (((m-n)%2)*x);
}


void solve(){
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    if(n>m) swap (n,m);
    //ll c1 = ((n+m-2)*x);
    //ll c2 = ((n-1)*y) + ((m-n)*x);
    //ll c3 = ((n-1)*y) + (((m-n)/2)*2*y) + (((m-n)%2)*x);
    ll c1 = manhattan(n,m,x,y);
    ll c2 = diagonal(n,m,x,y);
    ll c3 = onlydiagonal(n,m,x,y);
    cout<<min({c1,c2,c3})<<'\n';
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
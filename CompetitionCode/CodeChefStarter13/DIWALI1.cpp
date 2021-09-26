#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;



void solve(){
    ll p,a,b,c,x,y,t=0;
    cin>>p>>a>>b>>c>>x>>y;
    ll anarcost = b + (a*x);
    ll chakricost = c + (a*y);
    if(anarcost<chakricost){
        t+= p/anarcost;
        p-=anarcost*t;
        t+= p/chakricost;
    } else {
        t+= p/chakricost;
        p-=chakricost*t;
        t+= p/anarcost;
    }
    cout<<t<<'\n';
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
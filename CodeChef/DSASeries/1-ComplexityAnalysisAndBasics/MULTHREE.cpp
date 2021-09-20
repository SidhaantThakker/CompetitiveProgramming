#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    ll k,d0,d1,q,r,sum;
    cin>>k>>d0>>d1;
    ll d = d0+d1;
    ll block = (2*d)%10 + (4*d)%10 + (8*d)%10 + (16*d)%10;
    q = (k-3)/4;
    r = (k-3)%4;
    ll extra = 0;
    fi(r){
        d*=2;
        extra+=d%10;
    }
    d = d0 + d1;
    sum = d + (d%10) + q*block + extra;
    if(k==2)
        sum = d;
    if(sum%3==0)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
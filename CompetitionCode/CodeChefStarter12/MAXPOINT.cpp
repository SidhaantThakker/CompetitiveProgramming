#include <bits/stdc++.h>
#define fi(l,h) for(ll i = l; i < h; ++i)
#define fjr(h,l) for(ll j = h; j >= l; --j)
using namespace std;
using ll = long long;
using vi = vector<ll>;

ll score(ll t[], ll p[], ll n, ll total){
    ll temp[total+1];
    memset(temp,0,sizeof(temp));
    fi(1,n+1){
        fjr(total,0) {
            if (t[i - 1] <= j)
                temp[j] = max(temp[j], temp[j - t[i - 1]] + p[i - 1]);
        }
    }
    return temp[total];
}

void solve(){
    ll a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    ll t[60];
    ll p[60];
    fi(0,20){
        p[i] = x;
        t[i] = a;
        p[i+20] = y;
        t[i+20] = b;
        p[i+40] = z;
        t[i+40] = c;
    }
    cout<<score(t,p,60,240)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
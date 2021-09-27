#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    ll n;
    ll sum=0;
    cin>>n;
    ll a[n];
    ll b[n];
    fi(n){
        cin>>a[i];
        sum-=a[i]*(i+1);
    }
    fi(n){
        cin>>b[i];
        sum+=b[i]*(i+1);
    }
    cout<<sum<<'\n';
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
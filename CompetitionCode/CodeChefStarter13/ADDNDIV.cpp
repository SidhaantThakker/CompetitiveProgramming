#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

vi primefactors(ll n){
    vi primes;
    while(n%2==0){
        n/=2;
        primes.push_back(2);
    }
    for(ll i=3;i*i<=n;i+=2){
        while(n%i==0){
            primes.push_back(i);
            n/=i;
        }
    }
    if(n>2)
        primes.push_back(n);
    return primes;
}

void solve(){
    ll a,b;
    cin>>a>>b;
    vi primes = primefactors(a);
    for(auto i : primes){
        if(b%i!=0){
            cout<<"NO"<<'\n';
            return;
        }
    }
    cout<<"YES"<<'\n';
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
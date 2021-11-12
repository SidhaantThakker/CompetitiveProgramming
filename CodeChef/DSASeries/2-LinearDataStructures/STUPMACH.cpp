#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

int minIndex(int ix, vector<long long> v){
    int minIx = 0;
    int minVal = v[0];
    for(int i = 0; i < ix; i++){
        if(v[i] < minVal){
            minVal = v[i];
            minIx = i;
        }
    }
    return minIx;
}

void solve(){
    int n;
    cin>>n;

    vector<long long> s(n);
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }

    int ix = n;
    int mem = n;
    long long total = 0;
    while(ix!=0){
        ix = minIndex(ix,s);
        total += s[ix]*(mem - ix);
        mem = ix;
    }
    cout<<total<<'\n';
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
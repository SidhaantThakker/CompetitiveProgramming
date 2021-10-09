#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n;
    cin>>n;
    int S[n], V[n], P[n], maxVal=0;
    fi(n){

        cin>>S[i];
        cin>>P[i];
        cin>>V[i];

        maxVal = max((P[i]/(S[i]+1))*V[i], maxVal);
    }    
    cout<<maxVal<<'\n';
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
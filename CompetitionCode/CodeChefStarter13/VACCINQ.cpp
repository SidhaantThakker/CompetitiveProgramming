#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n,p,x,y,t=0;
    cin>>n>>p>>x>>y;
    int a[n];
    fi(n){
        cin>>a[i];
        if(i<p-1){
            if(a[i]==0)
                t+=x;
            else 
                t+=y;
        }
    }
    cout<<t+y<<'\n';

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
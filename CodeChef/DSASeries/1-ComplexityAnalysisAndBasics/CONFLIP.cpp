#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
#define fj(n) for(int j = 0; j < n; ++j)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve2(){
    int i,n,q;
    cin>>i>>n>>q;
    int maj = (n%2!=0)? n/2 + 1 : n/2;
    int min = n/2;
    //cout<<"maj "<<maj<<endl;
    //cout<<"min "<<min<<endl;
    int ans = (q==1)? ((i==1)? min : maj):((i==1)? maj : min);
    cout<<ans<<endl;
}
void solve(){
    int G;
    cin>>G;
    while(G--){
        solve2();
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
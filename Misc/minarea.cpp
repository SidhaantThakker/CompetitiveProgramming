#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int n,f,s;
    ll area;
    ll total;
    cin>>n;
    vector< pair<int,int> > v;
    pair<int,int> p1;
    pair<int,int> p2;
    pair<int,int> p3;
    fi(n){
        cin>>f>>s;
        v.push_back(make_pair(f,s));
    }
    for(int i = 0; i < n; i++){
        p1 = v[i];
        for(int j = 0; j < i; j++){
            p2 = v[j];
            for(int k = 0; k < j; k++){
                p3 = v[k];
                if()
            }
        }
    }
    cout<<'\n';
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
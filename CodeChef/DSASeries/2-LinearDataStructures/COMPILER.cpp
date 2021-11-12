#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    string s;
    cin>>s;
    int a = 0;
    int ix = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '<'){
            a++;
        } else if(s[i] == '>'){
            a--;
        }
        if(a < 0){
            a = 0;
            break;
        } else if(a == 0){
            ix = i+1;
        }
    }
    cout<<ix<<'\n';
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
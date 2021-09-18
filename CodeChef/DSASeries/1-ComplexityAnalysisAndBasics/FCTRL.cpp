#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int c = 0;
    int i = 5;
    while(n>=i){
        c+=(n/i);
        i*=5;
    }
    cout<<c<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%4>=2)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}
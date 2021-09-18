#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,x=0;
    cin>>n;
    while(n!=0){
        x = x*10 + n%10;
        n=n/10;
    }
    cout<<x<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
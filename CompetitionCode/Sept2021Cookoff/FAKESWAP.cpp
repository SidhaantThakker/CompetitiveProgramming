#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s,p;
    cin>>s;
    cin>>p;
    int one = 0;
    int zero = 0;
    if(s==p){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(p[i]=='1')
            one++;
        else
            zero++;
    }

    if(one==0 || zero==0){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
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
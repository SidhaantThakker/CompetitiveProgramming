#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,c=1;
    cin>>n;
    int speeds[n];
    for(int i=0;i<n;i++){
        cin>>speeds[i];
    }
    for(int i=1;i<n;i++){
        if(speeds[i]>speeds[i-1]){
            speeds[i] = speeds[i-1];
        } else {
            c++;
        }
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
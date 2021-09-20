#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int b = 0;
    for(int i=0;i<n;i++){
        b = 0;
        for(int j=0;j<=i;j++){
            cout<<"(";
            b++;
        }
        for(int j=0;j<b;j++){
            cout<<")";
        }
        for(int j=0;j<2*n-2*b;j++){
            if(j%2==0)
                cout<<"(";
            else
                cout<<")";
        }
        cout<<endl;
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
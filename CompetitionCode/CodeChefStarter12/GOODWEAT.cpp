#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

void solve(){
    int x;
    int sunny=0;
    fi(7){
        cin>>x;
        if(x==1)
            sunny++;
    }
    if(sunny>=4)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
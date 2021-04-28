#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin>>a>>b;
    int n = a.size(), m = b.size();
    int len=0,j=0,i=0;
    int ans = 0;
    for(len=0;len <= min(n,m);len++){
        for(i=0;i+len<=n;i++){
            for(j=0;j+len<=m;j++){
                if(a.substr(i, len)==b.substr(j, len)){
                    ans = max(ans,len);
                }   
            }
        }
    }

    printf("%d\n",m+n-2*ans);

}

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
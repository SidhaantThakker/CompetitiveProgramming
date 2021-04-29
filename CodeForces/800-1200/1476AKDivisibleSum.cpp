#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int k;
    cin>>n>>k;
    int t;
    if(n<=k){
        //printf("k is now %d\nn is %d\nk/n is %f\n",k,n,((float)k/(float)n));
        //printf("Finally %f\n",ceil((float)k/(float)n));
        long long x = (long long)ceil((double)k/(double)n);
        cout<<x<<"\n";
    }
    else{
    
        //printf("k is now %d\nn is %d\nk/n is %f\n",k,n,((float)k/(float)n));
        //printf("Finally %f\n",ceil((float)k/(float)n));
        t = ceil((double)n/(double)k);
        k = k*t;
        long long x = (long long)ceil((double)k/(double)n);
        cout<<x<<"\n";
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
#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

//This solution simply uses recursion to go through every possible branch of the binary tree
int solve(int start,int n){
    if(start == n)
        return 1;
    if(start > n)
        return 0;
    return solve(start+1,n) + solve(start+2,n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<solve(0,n)<<'\n';
    return 0;
}
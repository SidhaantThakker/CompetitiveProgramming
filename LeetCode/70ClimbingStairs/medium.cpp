#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;
//This solution implements a DP map to save time on redundant calculations
unordered_map<int, int> dp;

int solve(int start,int n){
    if(start == n)
        return 1;
    if(start > n)
        return 0;
    if(dp.find(start)!=dp.end())
        return dp[start];
    else
        dp[start] = solve(start+1,n) + solve(start+2,n);
    return dp[start];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<solve(0,n)<<'\n';
    return 0;
}
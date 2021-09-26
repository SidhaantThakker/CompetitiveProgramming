#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;
//bigbrain solution that uses the underlying fibonacci pattern to solve the problem

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, one=1, two=1, temp;
    cin>>n;
    fi(n-1){
        temp = two;
        two = one;
        one = one + temp;
    }
    cout<<one<<'\n';
    return 0;
}
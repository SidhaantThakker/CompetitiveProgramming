#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
     int climbStairs(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int one=1, two=1, temp;
        fi(n-1){
            temp = two;
            two = one;
            one = one + temp;
        }
         return one;
    }
};
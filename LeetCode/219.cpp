#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            if(set.count(nums[i]))
                return true;

            set.insert(nums[i]);

            if(i-k>=0)
                set.erase(nums[i-k]);
        }
        return false;
    }
};

int main(){
    Solution ob;
}
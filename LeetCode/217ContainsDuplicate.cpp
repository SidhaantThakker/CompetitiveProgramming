#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> prev;
        for(auto i = nums.begin(); i!=nums.end(); i++){
            if(prev.find(*i)!=prev.end()){
                return true;
            }
            prev[*i] = i - nums.begin();
        }
        return false;
    }
};

int main(){
    Solution ob;
    vector<int> nums{1,2,3,4,5,1};
    cout<<ob.containsDuplicate(nums)<<'\n';
}
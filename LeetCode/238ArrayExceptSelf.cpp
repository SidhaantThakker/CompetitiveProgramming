#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = static_cast<int>(nums.size());
        vector<int> ans(l);
        int prod = 1;
        for(int i=0;i<l;i++){
            ans.at(i) = prod;
            prod*=nums[i];
        }
        prod = 1;
        for(int i=l-1;i>=0;i--){
            ans.at(i) *= prod;
            prod*=nums[i];
        }
        return ans;
    }
};

int main(){
    Solution test;
    vector<int> nums{1,2,3,4,5};
    vector<int> ans = test.productExceptSelf(nums);
    fi(static_cast<int>(ans.size())){
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
    return 0;
}


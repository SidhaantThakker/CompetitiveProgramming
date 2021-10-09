#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = static_cast<int>(nums.size());
        int curSum = 0;
        int maxSum = nums[0];
        for(int i = 0; i < l; i++){

            if(curSum<0){
                curSum = 0;
            }

            curSum+=nums[i];

            if(maxSum<curSum){
                maxSum = curSum;
            }

        }
        return maxSum;
    }
};

int main(){

    Solution ob;
    vector<int> nums{-2,-1};
    cout<<ob.maxSubArray(nums)<<'\n';
    return 0;

}
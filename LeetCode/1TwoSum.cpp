#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> past;
        vector<int> ans;
        int search;
        for(auto i = nums.begin(); i!= nums.end(); i++){
            search = target - *i;
            if(past.find(search)!=past.end()){
                ans.push_back(past[search]);
                ans.push_back(i-nums.begin());
                return ans;
            } else {
                past[*i] = i - nums.begin();
            }
        }
    }
};

int main(){
    vector<int> test{3,2,4};
    int target = 6;
    Solution ob;
    vector<int> ans = ob.twoSum(test, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
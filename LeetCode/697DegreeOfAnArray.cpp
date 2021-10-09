#include <bits/stdc++.h>
#define fi(n) for(int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using vi = vector<ll>;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> firstSeen;

        int maxVal = 0;
        int maxFreq = 0;
        int minLength = 0;

        for(auto i = nums.begin(); i != nums.end(); i++) {

            if(!freq[*i]){
                firstSeen[*i] = i - nums.begin();
            }

            freq[*i]++;

            if(freq[*i] > maxFreq){
                maxFreq = freq[*i];
                minLength = (int) ((i-nums.begin()) - firstSeen[*i]);
            } 
            if(freq[*i] == maxFreq){
                minLength = min((long)minLength, (i-nums.begin()) - firstSeen[*i]);
            }
        }

        return minLength+1;
    }
};

int main(){
    Solution ob;
    vector<int> nums{1,2,2,3,1};
    cout<<ob.findShortestSubArray(nums)<<'\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,max_profit=0, profit = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                profit = prices[r] - prices[l];
                max_profit = max(max_profit, profit);
            } else {
                l = r;
            }
            r++;
        }
        return max_profit;
    }
};

int main(){
    vector<int> prices{1,2,4,2,5,7,2,4,9,0,9};
    Solution ob;
    cout<<ob.maxProfit(prices)<<'\n';
}
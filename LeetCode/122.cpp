#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,max_profit=0,profit=0,total=0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                //cout<<l<<" "<<r<<'\n';
                profit = prices[r]-prices[l];
            }
            if(profit>max_profit){
                total+=profit;
                total-=max_profit;
                max_profit = profit;
            } else {
                max_profit = 0;
                profit = 0;
                l=r;
            }
            r++;
        }
        return total;
    }
};

int main(){
    vector<int> prices{7,1,5,3,6,4};
    Solution ob;
    cout<<ob.maxProfit(prices)<<'\n';
}
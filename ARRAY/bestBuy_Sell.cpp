#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
           int bestBuy = prices[0];
    int mp = 0;
    
    for(int i = 1 ; i < prices.size() ; i++)
    {
        if(prices[i]>bestBuy)
        {
            mp = max(mp,prices[i]-bestBuy);
        }
        
        
        else
        {
        bestBuy = min(bestBuy,prices[i]);
        }
        
    }
    
    return mp;
        
    }
};

int main()
{
     Solution obj;
     vector<int>arr = {5,3,1,6,7,3};
     int x =obj.maxProfit(arr);
     cout<<x;

     return 0;

}
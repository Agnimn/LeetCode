class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best = prices[0], maxPrice = 0;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i] > best){
                maxPrice = max(maxPrice, prices[i] - best);
            }
            best = min(best, prices[i]);

        }
        return maxPrice;
    }
};
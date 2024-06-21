class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceFound = 200000;
        int res = 0;
        for(int price:prices) {
            minPriceFound = min(minPriceFound, price);
            res = max(res, price - minPriceFound);
        }
        return res;
    }
};
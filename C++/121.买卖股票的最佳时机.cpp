/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = 10000;


        for(int i=0; i<prices.size(); i++){
            max_profit = max(max_profit, prices[i] - min_price);    // 先更新这一天的最大利润，因为不可能这一天购入这一天卖出
            min_price = min(min_price, prices[i]);  // 再更新最低价格，一定是算完利润之后的
        }

        return max_profit;
    }
};
// @lc code=end


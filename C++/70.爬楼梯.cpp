/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        // 最简单的dp题
        vector <int> result (50, 0);
        result[1] = 1;
        result[2] = 2;
        
        for(int i=3; i<=45; i++){
            result[i] = result[i-1] + result[i-2];
        }
        
        return result[n];
    }
};
// @lc code=end


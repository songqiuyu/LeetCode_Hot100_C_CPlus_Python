/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // 常规用哈希表也可以实现，异或运算就是0跟数字异或结果是原来的数字，自己跟自己异或结果是0，异或满足结合律，因此成对的全部异或成0，只剩下没成对的
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            result = result ^ nums[i];
        }

        return result;
    }
};
// @lc code=end


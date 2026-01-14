/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // 滑窗的方法（滑窗法）哈希表用来保存如果出现重复，那么左边界应该移动到的位置，因此每次循环都是j+1
        // i是改变界的
        // 结果就是左右界的相减
        // O(n)
        vector<int> m(128, 0);
        int result = 0;
        int i = 0;
        int j;
        for(j=0; j<s.size(); j++){
            i = max(i, m[s[j]]);
            m[s[j]] = j + 1;
            result = max(result, j-i+1);
        }
        return result;
    }
};
// @lc code=end

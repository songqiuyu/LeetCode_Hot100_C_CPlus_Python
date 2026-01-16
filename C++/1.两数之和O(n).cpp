/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> a;    // 声明hashmap，键值对
        vector<int> b(2, -1);      // 结果vector
        
        //[] pair
        // 核心思想是用map先存了一遍
        for(int i=0; i<nums.size(); i++){
            a.insert(map<int, int>::value_type(nums[i], i));
        }

        for(int i=0; i<nums.size(); i++){
            if((a.count(target-nums[i]) > 0) && (a[target-nums[i]] != i)){
                b[0] = i;
                b[1] = a[target-nums[i]];
                break;
            }
        }

        return b;

    }
};
// @lc code=end


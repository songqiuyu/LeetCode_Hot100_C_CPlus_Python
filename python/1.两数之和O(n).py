#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
# hash map 哈希表，庞大的存储空间，一个值一个存储空间，存的是下表

# @lc code=start
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices = {}
        for index, value in enumerate(nums):
            value_need = target - value
            if value_need in indices:
                return [index, indices[value_need]]
            indices[value] = index
        
        return []
# @lc code=end

solution = 
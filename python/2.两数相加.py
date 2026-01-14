#
# @lc app=leetcode.cn id=2 lang=python3
#
# [2] 两数相加
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()

        while l1 is not None and l2 is not None:
            res = (l1.val + l2.val) % 10
            carry = (l1.val + l2.val) // 10
            dummy.val = res + dummy.val
            dummy.next.val += carry
            l1 = l1.next
            l2 = l2.next
        


            

# @lc code=end


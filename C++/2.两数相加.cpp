/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 构建哑巴节点 dummy， 最后返回dummy.next
        ListNode *dummy = new ListNode(0);
        ListNode *node = dummy;

        int C = 0;

        while(l1 || l2 || C){
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + C;

            node->next = new ListNode(sum % 10);
            node = node -> next;

            C = sum / 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        ListNode * result = dummy->next;
        delete dummy;
        return result;
    }
};
// @lc code=end


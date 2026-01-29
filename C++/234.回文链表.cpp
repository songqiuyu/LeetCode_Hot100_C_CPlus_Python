/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        // 快慢指针，首先回文链表他一定是偶数个的
        if (head == nullptr) return false;
        if (head->next == nullptr) return true;

        
        
        ListNode *p;
        ListNode *q;

        p = head;
        q = head->next->next;

        while(q!=head){
            p = p->next;
            q = (q == nullptr) ? head : q->next->next;
        }

        while(p){
            if(p->val != q->val) return false;
            p=p->next;
            q=q->next;
        }

        return true;

    }
};
// @lc code=end


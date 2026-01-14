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
        int len1;
        int len2;

        ListNode* p = l1;
        ListNode* q = l2;

        while(p->next!=NULL){       // 获取len1的长度
            len1++;
            p = p->next;
        }

        while(q->next!=NULL){       // 获取len2的长度
            len2++;
            q = q->next;
        }


        int i;

        if(len1 > len2){        // len1的长度大于len2的长度
            for(i=1; i<=len1-len2; i++){
                q->next = new ListNode();
                q=q->next;
            }
        } else {
            for(i=1; i<=len2-len1; i++){
                p->next = new ListNode();
                p=p->next;
            }
        }

        // 以上就是已经完成了数据的规范化

        p = l1;
        q = l2;

        ListNode *l3 = new ListNode();
        ListNode *w = l3;

        int a = 0;
        int C = 0;


        while(p!=NULL && q!=NULL){
            a = p->val + q->val + C;
            C = a >= 10 ? 1: 0;
            w->val = a % 10;
            if(p->next==NULL && q->next==NULL){
                if (C == 1){
                    w->next = new ListNode(1);
                }
            } else {
                w->next = new ListNode();
            }

            
            w=w->next;
            p=p->next;
            q=q->next;
        }

        return l3;
    }
};
// @lc code=end


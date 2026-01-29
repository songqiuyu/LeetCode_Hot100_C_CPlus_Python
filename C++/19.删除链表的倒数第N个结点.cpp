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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // 倒数，栈

        int step = n;
        
        ListNode *p;
        ListNode *q;

        p = head;
        q = head;

        while(step > 0) {
            p = p->next;
            step--;
        }

        if(p == nullptr) {
            q = head;
            head = head->next;
            delete(q);
            return head;
        }

        while(p->next) {
            q = q->next;
            p = p->next;
        }

        p = q->next;
        q->next = p->next;
        delete(p);

        return head;

    }
};
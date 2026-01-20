/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // 双指针，因为步长一样，因此一直交叉循环走，要么相交在相交节点，要么都是到nullptr

        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }

        ListNode *p1 = headA;
        ListNode *p2 = headB;

        while(p1 != p2){
            p1 = p1 == nullptr ? headB : p1->next; 
            p2 = p2 == nullptr ? headA : p2->next;
        }

        return p1;
    }
};
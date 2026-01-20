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
        // 最简单的思路就是哈希表，哈希表写法如下，遍历两边

        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }



        unordered_set<ListNode*> node;

        while(headA != nullptr) {
            node.insert(headA);
            headA = headA->next;
        }

        while(headB != nullptr){
            if(node.count(headB)){
                return headB;
            }

            headB = headB->next;
        }

        return nullptr;
        
    }
};
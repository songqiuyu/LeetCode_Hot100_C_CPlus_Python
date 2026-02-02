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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> list_set;

        while(head != nullptr) {
            if(list_set.count(head) == 1) {
                return head;
            } else {
                list_set.insert(head);
                head = head->next;
            }
        }

        return nullptr;

    }
};
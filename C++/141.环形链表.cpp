/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// @lc code=start
class Solution {
public:
    bool hasCycle(ListNode *head) {

    // HashMap的方法
    unordered_set<ListNode*> node;

    while(!head){
        if(node.count(head)){
            return true;
        } else {
            node.insert(head);
            head = head->next;
        }
    }

    return false;

    }
};
// @lc code=end
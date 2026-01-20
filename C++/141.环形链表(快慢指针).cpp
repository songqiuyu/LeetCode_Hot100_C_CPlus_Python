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

        if (head == nullptr || head->next == nullptr){
            return false;
        }

        ListNode *p1 = head;
        ListNode *p2 = head->next;


        //判断俩指针相等跳出（成环）
        while(p1 != p2) {

            // 不成环的情况一定有nullptr，只需要判断快的，因为快的肯定先到，判断p2==nullptr或者p2->next==nullptr；
            if (p2 == nullptr || p2->next == nullptr){
                return false;
            }
            // 快慢跳转
            p1 = p1->next;
            p2 = p2->next->next;
        }

        return true;
    }
};
// @lc code=end
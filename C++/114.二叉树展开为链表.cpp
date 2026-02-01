/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        // 先 中 后表示的是根的位置，先序就是根左右
        // 我用栈的方式来
        if (root == nullptr) return ;
        stack<TreeNode*> stk;
        Preorder(root, stk);

        while(!stk.empty()){
            TreeNode *curr = stk.top();
            stk.pop();
            if(!stk.empty()){
                TreeNode *prev = stk.top();
                prev->left = nullptr;
                prev->right = curr; 
            }
        }

    }

    void Preorder(TreeNode*root, stack<TreeNode*> &stk) {
        if (root != nullptr) {
            stk.push(root);
            Preorder(root->left, stk);
            Preorder(root->right, stk);
        }
    }
};
/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
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
    vector<int> inorderTraversal(TreeNode* root) {
        // 中序遍历就是左根右这样，二叉树是不是用堆栈更好一些？
        vector<int> result;
        stack<TreeNode*> stk;

        while (root != nullptr || !stk.empty()){
            // 二叉树中序遍历，先一直往左遍历
            while (root != nullptr){
                stk.push(root);
                root = root->left;
            }

            root = stk.top();
            stk.pop();
            result.push_back(root->val);
            root = root->right;
        }

        return result;

        
    }
};
// @lc code=end


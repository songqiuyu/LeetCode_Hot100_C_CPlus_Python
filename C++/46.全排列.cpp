class Solution {
public:

    void dfs(vector<int>& nums, vector<bool> &used, vector<vector<int>> &res, vector<int> &path){
        // 排列到尾了，就插入并回溯
        if(path.size() == nums.size()) {
            res.push_back(path);
            return;
        }

        // 循环遍历
        for (int i = 0; i < nums.size(); i++) {
            // 如果这一位用过了，那就别用了
            if (used[i] == true) continue;
            used[i] = true;
            path.push_back(nums[i]);
            dfs(nums, used, res, path);
            path.pop_back();    // 遍历完之后弹出来
            used[i] = false;    // 然后不再用了
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        // 全排列这种大概率就是DFS，深度优先遍历
        vector<vector<int>> res;
        vector<bool> used(nums.size(), false);
        vector<int> path;

        dfs(nums, used, res, path);
        return res;
    }


};
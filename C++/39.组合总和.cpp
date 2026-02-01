class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // 递归+回溯，存在选与不选的情况
        vector<vector<int>> ans;
        vector<int> combine;
        dfs(candidates, target, ans, combine, 0);
        return ans;
    }

    void dfs(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int>&combine, int idx) {
        if (idx == candidates.size()){
            return;     // 搜索到最后一个了，边界条件
        }

        if (target == 0) {
            // 满足条件了，因为不需要加了
            ans.emplace_back(combine);
            return;    // 因为是引用，所以用emplace_back去生成一个新值保存进去
        }   
        
        // 2选1，选择当前的数还是看看下一个数
        // 看下一个数
        dfs(candidates, target, ans, combine, idx + 1);
        // 选择当前的数
        if (target - candidates[idx] >= 0) {
            combine.emplace_back(candidates[idx]);
            dfs(candidates, target - candidates[idx], ans, combine, idx);   // 因为当前数可以多次选择，所以不加1
            combine.pop_back(); //再退回，去搜索别的情况
        }

    }
};
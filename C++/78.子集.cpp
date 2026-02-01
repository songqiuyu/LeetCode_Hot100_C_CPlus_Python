class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> result;

        for(int i = 0; i < n; i++){
            if (i == 0) result.push_back({});    // 插入一个空向量
            else {
                int b = i;
                vector<int> tmp;
                while(b > 0){
                    int bits = b & 1;
                    tmp.push_back(nums[bits]);
                    b = b >> 1;
                }
            }
        }
    }
};
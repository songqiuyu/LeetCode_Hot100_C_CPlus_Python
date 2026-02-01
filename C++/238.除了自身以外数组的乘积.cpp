class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 归并的思想，分为左侧和右侧部分
        int n = nums.size();

        vector<int> L(n, 0), R(n, 0);

        vector<int> result(n);

        // 动态规划
        L[0] = 1;
        for (int i = 1; i < n; i++){
            L[i] = L[i-1] * nums[i - 1]; // 这样就累乘起来了
        }

        R[n-1] = 1;
        for (int i = n - 2; i >= 0; i--){
            R[i] = R[i+1] * nums[i + 1];
        }

        for(int i = 0; i < n; i++) {
            result[i] = L[i] * R[i];
        }
        
        return result;
    }
};
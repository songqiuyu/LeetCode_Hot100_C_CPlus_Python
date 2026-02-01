class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        // 直接在结果上进行修改，先左侧，再右侧
        int n = nums.size();
        vector<int> result(n, 1);

        // 先遍历得到左侧
        result[0] = 1;
        for(int i = 1; i < n; i++){
            result[i] = result[i-1] * nums[i-1];
        }

        // 左侧的乘积全部得到
        int R = 1;  // 用变量存储动态规划的值
        for(int i = n-1; i >= 0; i--){
            result[i] = result[i] * R; //R就代表R[i]
            R = R * nums[i];
        }

        return result;
    }
};
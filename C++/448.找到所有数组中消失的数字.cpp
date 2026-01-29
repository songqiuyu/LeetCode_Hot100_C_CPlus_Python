class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for (int num : nums){
            int x = (num - 1) % n;
            if(nums[x] <= n) {
                nums[x] += n;
            }
        }
        // 每遇到一个数都让他原地+n，+n对取余操作也不会有影响，如果哪一个没被加到n，那就说明没这个下标的数字
        // 牛逼

        vector<int> ret;
        for(int i = 0; i < n; i++){
            if(nums[i] <= n){
                ret.push_back(i + 1);
            }
        }

        return ret;
    }
};
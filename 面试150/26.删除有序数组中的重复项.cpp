class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;

        int val = nums[0];
        int L = 1;
        int R = 1;

        while(R < n) {
            if(nums[R] == val) {
                R++;
            } else {
                val = nums[R];
                nums[L] = nums[R];
                L++;
                R++;
            }
        }

        return L;




    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int L = 2;
        int R = 2;

        
        // 因为是连续的，我直接n - 2就行,L左侧都是排好的，那我排好的里面L-2肯定跟R是不同的
        while(R < n) {
            if(nums[L-2] != nums[R]){
                nums[L] = nums[R];
                L++;
            }
            R++;
        }

        return L;
    }
};
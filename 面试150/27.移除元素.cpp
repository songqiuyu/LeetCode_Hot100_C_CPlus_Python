class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 双指针，一个指的位置往左全是已经好了的数，一个指的就是后续的值
        int L = 0;
        int R = 0;
        int ans = 0;
        int n = nums.size();

        // 左边的都是已经交换过的，右边的都是没探索过的
        // 左指针表示第一个val值得位置，右就是探索的
        // Link 
        while(R < n) {
            if(nums[R] == val) {
                R++;
            } else {
                nums[L] = nums[R];
                ans++;
                L++;
                R++;
            }
        }

        return ans;

    }
};
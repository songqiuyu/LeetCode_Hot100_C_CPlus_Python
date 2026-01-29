class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 最直接的n^2的方式就是，冒泡
        // int temp;
        // int len = nums.size();
        // for(int i=0; i<len-1; i++){
        //     for(int j=i; j<len; j++){
        //         if(nums[i] == 0){
        //             temp = nums[j];
        //             nums[j] = nums[i];
        //             nums[i] = temp;
        //         }
        //     }
        // }


        // 这种交换的题目，可以采用双指针的方式，左右指针交换
        // right是表示待处理的开头，left表示已处理的末尾，每次判断待处理的是不是0，不是0要跟left交换并让左边+1，是零就不用管了。每次都要right++
        int n = nums.size(), left = 0, right = 0;
        while(right < n){
            if (nums[right]) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }



    }
};
// @lc code=start
class Solution {

    int count_in_range(vector<int>& nums, int target, int lo, int hi){
        int count = 0;
        for(int i=lo; i<=hi; i++)
            if (nums[i] == target)
                count++;
        return count;
    }


    int majority_element_rec(vector<int>& nums, int lo, int hi) {
        if (lo == hi)
            return nums[lo];
        int mid = (lo + hi) / 2;
        int left_majority = majority_element_rec(nums, lo, mid);
        int right_majority = majority_element_rec(nums, mid + 1, hi);

        if (count_in_range(nums, left_majority, lo, hi) > (hi - lo + 1) / 2)
            return left_majority;
        if (count_in_range(nums, right_majority, lo, hi) > (hi - lo + 1) / 2)
            return right_majority;
        return -1;
    }



public:
    int majorityElement(vector<int>& nums) {
        // 方法一：使用哈希 O(n) O(n)
        // unordered_map<int, int> counts

        // 方法二：因为出现次数大于n/2，那么下标n/2那个一定是，排序之后 取决于排序算法复杂度
        // sort(nums.begin(), nums.end());
        // return nums[nums.size() / 2];

        // 方法三：打擂台/候选/投票
        // 选一个候选人计算他是不是

        // while(true){
        //     int candidate = nums[rand() % nums.size()];
        //     int count = 0;
        //     for(int num : nums){
        //         if(num == candidate){
        //             count++;
        //         }
        //     }
        //     if(count > nums.size() / 2)
        //         return candidate;
        // }
        // return -1;


        // 方法四：归并
        return majority_element_rec(nums, 0, nums.size()-1);



    }
};
// @lc code=end
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set;
        int n = nums.size();
        for(int i = 0; i < n; ++i) {
            st.insert(nums[i]);
        }

        int longest = 0;

        for(int i = 0; i < n; ++i) {
            if(!num_set.count(nums[i] - 1)) {
                int currentNum = nums[i];
                int current = 1;
                while (num_set.count(currentNum + 1)) {
                    currentNum += 1;
                    current += 1;
                }

                longest = max(longest, current);
            }
        }

        return longest;


    }
};
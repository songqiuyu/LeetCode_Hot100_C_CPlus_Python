class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 双指针一个个排序
        vector<int> sort_array;

        int tmp;

        int i = 0;
        int j = 0;

        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                sort_array.push_back(nums1[i]);
                i++;
            } else {
                sort_array.push_back(nums2[j]);
                j++;
            }
        }

        // 如果i遍历完nums1了，这个时候
        while(j < n) {
            sort_array.push_back(nums2[j]);
            j++;
        }

        // 如果j遍历完nums2了，这个时候
        while(i < m) {
            sort_array.push_back(nums1[i]);
            i++;
        }

        for(int i = 0; i < m + n; ++i){
            nums1[i] = sort_array[i];
        }

    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        // 双指针
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);
            // 如果左边比右边小，只要左边不动，ans就是最大值了
            if (height[l] <= height[r]) {
                ++l;
            } else {
                --r;        // 右边同理
            }
        }

        return ans;

    }
};
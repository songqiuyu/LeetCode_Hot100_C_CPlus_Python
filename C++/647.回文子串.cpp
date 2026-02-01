class Solution {
public:
    int countSubstrings(string s) {
        // 找中心位置，中心无非就是一个字符或者两个字符的情况
        // 先枚举出所有回文中心
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++){
            int l = i / 2;
            int r = i / 2 + i % 2;
            while(l >= 0 && r < n && s[l] == s[r]) {
                --l;
                ++r;
                ++ans;
            }
        }
        return ans;
    }
};
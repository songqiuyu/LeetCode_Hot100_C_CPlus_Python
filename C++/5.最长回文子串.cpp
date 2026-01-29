class Solution
{
public:
    string longestPalindrome(string s)
    {

        int n = s.size();
        if (n == 1)
            return s;

        // 动态规划，s[i, j] = s[i+1, j-1] ^ (si == sj)
        int maxlen = 1;
        int begin = 0;

        // 双数组声明方式
        vector<vector<int>> dp(n, vector<int>(n));
        // 初始化
        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }

        for (int L = 2; L <= n; L++)
        { // 第一层是子串长度，长度为2 以上
            for (int i = 0; i < n; i++)
            { // 左
                // 由子串长度和i确定有边界，j - i + 1 = L得
                int j = L + i - 1;
                if (j >= n)
                {
                    break;
                }

                if (s[i] != s[j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if (j - i < 3)
                    {
                        dp[i][j] = 1;
                    }
                    else
                    {
                        dp[i][j] = dp[i + 1][j - 1]; // 如果相等了，就看dp[i+1][j-1]，如果也回文，那就回文
                    }
                }

                if (dp[i][j] == 1 & j - i + 1 > maxlen) {
                    maxlen = j - i + 1;
                    begin = i;
                }
            }
        }

        return s.substr(begin, maxlen);
    }
};
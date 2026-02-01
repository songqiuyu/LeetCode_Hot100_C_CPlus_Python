class Solution {
public:
    int numSquares(int n) {
        /*
            n = 1;  1 = 1           1
            n = 2;  2 = 2           1
            n = 3;  2 + 1 = 3       2
            n = 4;  4 = 4           1
            n = 5;  4 + 1 = 5       2
            n = 6;  4 + 2 = 6       2
            n = 7;  4 + 3 = 7       2
            n = 8;  4 + 4 = 8       2
            n = 9;  9 = 9           1
            n = 10; 9 + 1 = 10      2       
            // 1 ~ 根号n
        */

       vector<int> f(n + 1);
       for(int i = 1; i<=n ; i++) {
            int minn = INT_MAX;
            for (int j = 1; j * j <= i; j++){
                minn = min(minn, f[i - j * j]);     // 每次加的都是平方，如果说加的找到的减去这个平方的结果最少，我要最少的情况再加上这个j * j的情况就好了
            }
            f[i] = minn + 1;
       }
        return f[n];
    }
};
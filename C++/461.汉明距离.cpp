class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int s = x ^ y;  // 判断01不同就用异或啊，异或完了，相同为0 不同为1
        int ret = 0;
        while(s > 0){
            ret += s & 1;
            s >>= 1;
        }

        return ret;
    }
};
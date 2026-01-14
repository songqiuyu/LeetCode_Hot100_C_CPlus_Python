#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;



int lengthOfLongestSubstring(string s)
{
    // 纯暴力的方式

    int result = 0;
    int i;
    int j;

    int len;
    for (i = 0; i < s.size() - 1; i++)
    {
        vector<int> m(128, 0);
        len = 0;
        m[s[i]]++;
        for (j = i + 1; j < s.size(); j++)
        {
            if (m[s[j]] >= 1)
            {
                if (j == i + 1)
                    len = 1;
                else
                    len = j - i + 1;
                result = result < len ? len : result;
                break;
            }
            else
            {
                m[s[j]]++;
            }
        }
    }

    return result;
}

int main()
{

    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);
    return 0;
}
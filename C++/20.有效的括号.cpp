/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        // 栈
        stack<char> S;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                S.push(s[i]);
            }

            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (!S.empty())
                {
                    char top = S.top();
                    if (top == '(' && s[i] != ')')
                    {
                        return false;
                    }
                    else if (top == '{' && s[i] != '}')
                    {
                        return false;
                    }
                    else if (top == '[' && s[i] != ']')
                    {
                        return false;
                    }
                    else
                    {
                        S.pop();
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        // 需要判断栈是否为空
        if (!S.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
// @lc code=end

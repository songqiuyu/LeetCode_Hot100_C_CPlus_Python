#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

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

int main()
{

    string s = "()";
    int result = isValid(s);
    printf("%d\n", result);
    return 0;
}
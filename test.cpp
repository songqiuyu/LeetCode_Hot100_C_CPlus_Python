#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    // 栈是先进后出，可以保证一直弹，入栈的一定是比当前要低的，一旦不低，就开始循环弹出求解
    stack<int> days;
    int n = temperatures.size();
    vector<int> result(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (days.empty())
        {
            days.push(i);
        }
        else
        {
            int top_day = days.top();
            while (temperatures[top_day] < temperatures[i] && !days.empty())
            {
                result[top_day] = i - top_day;
                days.pop();
                top_day = days.top();
            }

            if (temperatures[top_day] >= temperatures[i] || days.empty())
            {
                days.push(i);
            }
        }
    }
    return result;
}

int main()
{
    vector<int> test = {73, 74, 75, 71, 69, 72, 76, 73};
    dailyTemperatures(test);
}

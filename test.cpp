#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    // 双指针，一个指的位置往左全是已经好了的数，一个指的就是后续的值
    int L = 0;
    int R = 0;
    int ans = 0;
    int n = nums.size();

    while (R < n)
    {
        if (nums[R] == val)
        {
            R++;
        }
        else
        {
            nums[L] = nums[R];
            ans++;
            L++;
            R++;
        }
    }

    return ans;
}
int main()
{
    vector<int> numbers = {0, 1, 2, 2, 3, 0, 4, 2};

    removeElement(numbers, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int hammingDistance(int x, int y)
{
//01011101   
//01001001
    int result = 0;
    while (x > 0 && y > 0)
    {
        if ((x & 1) != (y & 1))
        {
            result++;
        }
        x = x >> 1;
        y = y >> 1;
    }

    while (x > 0){
                if (x & 1 != 0)
        {
            result++;
        }
    }

    if (x > 0)
    {

    }
    else if (y > 0)
    {
        if (y & 1 != 0)
        {
            result++;
        }
    }

    return result;
}
int main()
{
    hammingDistance(93, 73);
}


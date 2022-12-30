#include <stdio.h>

/**
 * 形考任务-3-9
 * 一个递归函数过程，求出两个函数m和n的最小公倍数
 * 输出：
 */
int fun(int m, int n)
{
    int c = 0;
    static int b = 2;
    if (m < b || n < b)
        return m * n;
    else if (m % b == 0 && n % b == 0)
    {
        c = b;
        return c * fun(m / b, n / b);
    }
    else
    {
        b++;
        return fun(m, n);
    }
}

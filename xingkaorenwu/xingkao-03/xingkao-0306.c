#include <stdio.h>

/**
 * 形考任务-3-6
 * 计算出1+x+x2+...+xn的值并返回
 * 输出：
 */
// n为正整数
double SF(double x, int n)
{
    double p = 1, s = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        p *= x;
        s += p;
    }
    return s;
}

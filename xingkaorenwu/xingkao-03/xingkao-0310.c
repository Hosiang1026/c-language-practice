#include <stdio.h>

/**
 * 形考任务-3-10
 * 求出并返回组数a的n个元素中大于等于平均数值的元素个数
 * 输出：
 */
int LK(double a[], int n)
{
    double s = 0;
    int i, m = 0;
    for (i = 0; i < n; i++)
        s += a[i];
    s /= n;
    for (i = 0; i < n; i++)
        if (a[i] >= s)
            m++;
    return m;
}

#include <stdio.h>

/**
 * 形考任务-3-8
 * 从组数a中顺序查找值为x的元素，若查找成功则返回1，否则返回
 * 输出：
 */
int WB(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return 1;
    return 0;
}

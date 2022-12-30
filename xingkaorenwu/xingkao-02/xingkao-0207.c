#include <stdio.h>

/**
 * 形考任务-2-7
 * 输出：
 */
void main()
{
    int a[8] = {12, 39, 26, 41, 55, 63, 72, 40};
    int i, i1 = 0, i2 = 0;
    for (i = 0; i < 8; i++)
        if (a[i] % 2 == 1)
            i1++;
        else
            i2++;
    printf("%d %d\n", i1, i2);
}

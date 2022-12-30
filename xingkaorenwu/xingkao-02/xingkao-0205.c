#include <stdio.h>

/**
 * 形考任务-2-5
 * 输出：
 */
const int M = 20;
void main()
{
    int i, c2, c3, c5;
    c2 = c3 = c5 = 0;
    for (i = 1; i <= M; i++)
    {
        if (i % 2 == 0)
            c2++;
        if (i % 3 == 0)
            c3++;
        if (i % 5 == 0)
            c5++;
    }
    printf("%d %d %d\n", c2, c3, c5);
}

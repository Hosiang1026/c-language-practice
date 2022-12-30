#include <stdio.h>

/**
 * 形考任务-2-3
 * 输出：
 */
void main()
{
    int i, s1 = 0, s2 = 0;
    for (i = 0; i < 10; i++)
        if (i % 2)
            s1 += i;
        else
            s2 += i;
    printf("%d %d\n", s1, s2);
}

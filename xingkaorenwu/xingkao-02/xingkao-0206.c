#include <stdio.h>

/**
 * 形考任务-2-6
 * 输出：
 */
void main()
{
    int i, s;
    for (i = 1, s = 0; i < 10; i++)
    {
        if (i % 3 == 0)
            continue;
        s += i;
    }
    printf("%d\n", s);
}

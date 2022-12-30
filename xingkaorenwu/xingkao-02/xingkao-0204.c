#include <stdio.h>

/**
 * 形考任务-2-4
 * 输出：
 */
void main()
{
    int n = 6, y = 1;
    while (n)
        y *= n--;
    printf("y=%d\n", y);
}

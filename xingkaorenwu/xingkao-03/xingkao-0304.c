#include <stdio.h>

/**
 * 形考任务-3-4
 * 输出：
 */
void main()
{
    int a[8] = {3, 5, 7, 9, 2, 3, 4, 8};
    int s = 0, *p;
    for (p = a; p < a + 8;)
        s += *p++;
    printf("s=%d\n", s);
}

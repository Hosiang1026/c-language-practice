#include <stdio.h>

/**
 * 形考任务-3-1
 * 输出：
 */
int WF(int x, int y)
{
    x = x + y;
    y = x + y;
    return x + y;
}
void main()
{
    int x = 5, y = 7;
    int z = WF(x, y);
    printf("z=%d\n", z);
}

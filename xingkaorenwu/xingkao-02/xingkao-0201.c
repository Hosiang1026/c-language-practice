#include <stdio.h>

/**
 * 形考任务-2-1
 * 输出：
 */
void main()
{
    int x = 5;
    switch (2 * x - 3)
    {
    case 4:
        printf("%d ", x);
    case 7:
        printf("%d ", 2 * x + 1);
    case 10:
        printf("%d ", 3 * x - 1);
        break;
    default:
        printf("%s", "default\n");
    }
}
#include <stdio.h>

/**
 * 形考任务-2-8
 * 输出：
 */
int a[10] = {4, 5, 6, 15, 20, 13, 12, 7, 8, 9};
void main()
{
    int i, s[4] = 0;
    for (i = 0; i < 10; i++)
    {
        switch (a[i] % 4)
        {
        case 0:
            s[0] += a[i];
            break;
        case 1:
            s[1] += a[i];
            break;
        case 2:
            s[2] += a[i];
            break;
        default:
            s[3] += a[i];
            break;
        }
    }
    for (i = 0; i < 4; i++)
        printf("%d ", s[i]);
}

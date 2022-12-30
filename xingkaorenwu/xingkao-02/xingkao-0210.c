#include <stdio.h>

/**
 * 形考任务-2-10
 * 输出：
 */
void main()
{
    int a[3][4] = {{1, 2, 7, 8}, {5, 6, 10, 6}, {9, 12, 3, 4}};
    int m = a[0][0];
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (a[i][j] > m)
                m = a[i][j];
    printf("%d\n", m);
}

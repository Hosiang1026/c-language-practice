#include <stdio.h>

/**
 * 综合练习-6-4
 * 输出: 6
 */
int wr11(int a[], int n, int k)
{
    int i, c = 0;
    for (i = 0; i < n; i++)
        if (a[i] >= k)
            c++;

    return c;
}

void main()
{
    int a[9] = {9, 5, 7, 12, 4, 8, 15, 10, 15};
    int c = wr11(a, 9, 8);
    printf("%d\n", c);
}

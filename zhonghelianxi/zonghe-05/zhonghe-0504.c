#include <stdio.h>

/**
 * 综合练习-5-4
 * 输出:
 * 21
 * 27
 * 14
 * 20
 * 39
 * 28
 * 32
 * 24
 * 15
 * 11
 *
 */
void main()
{
    int i = 0, j, n = 10, *a;
    a = calloc(10, sizeof(int));
    while (i < n)
    {
        a[i] = rand() % 30 + 10; 
        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                break;
        if (i == j)
            i++;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}

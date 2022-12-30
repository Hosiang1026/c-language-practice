#include <stdio.h>

/**
 * 形考任务-3-5
 * 输出：
 */
int LA(int *a, int n, int x)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        if (a[i] < x)
            s += a[i];
    return s;
}
void main()
{
    int a[8] = {5, 10, 15, 8, 12, 3, 9, 20};
    int b = LA(a, 5, 10);
    int c = LA(a + 2, 6, 10);
    printf("%d %d\n", b, c);
}

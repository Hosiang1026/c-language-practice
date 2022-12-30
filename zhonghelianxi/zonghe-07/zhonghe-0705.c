#include <stdio.h>

/**
 * ×ÛºÏÁ·Ï°-7-5
 * Êä³ö:
 */
struct AAA
{
    int a[6];
    int n;
};
struct AAA x;
void main(void)
{
    int i;
    int b[6] = {20, 35, 46, 18, 24, 52};
    x.n = 6;
    for (i = 0; i < x.n; i++)
        x.a[i] = b[x.n - i - 1];
    for (i = 0; i < x.n; i += 2)
        printf("%d ", x.a[i]);
    printf("\n");
}

#include <stdio.h>

/**
 * ×ÛºÏÁ·Ï°-7-4
 * Êä³ö:
 */
struct Worker
{
    char name[15];
    int age;
    int pay;
};
int xh2(struct Worker a[], int n)
{
    int i, x = a[0].pay;
    for (i = 1; i < n; i++)
        if (a[i].pay > x)
            x = a[i].pay;
    return x;
}
void main()
{
    struct Worker a[4] = {{"abc", 25, 420}, {"defa", 58, 638}, {"ghin", 49, 560}, {"jklt", 36, 375}};
    printf("%d\n", xh2(a, 4));
}

#include <stdio.h>

/**
 * �ο�����-3-3
 * �����
 */
int Count(int a[], int n, int x)
{
    int i, c = 0;
    for (i = 0; i < n; i++)
        if (a[i] > x)
            c++;
    return c;
}
void main()
{
    int a[8] = {20, 15, 32, 47, 24, 36, 28, 70};
    int b = Count(a, 8, 30);
    printf("b=%d\n", b);
}

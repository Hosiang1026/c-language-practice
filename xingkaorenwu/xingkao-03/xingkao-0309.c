#include <stdio.h>

/**
 * �ο�����-3-9
 * һ���ݹ麯�����̣������������m��n����С������
 * �����
 */
int fun(int m, int n)
{
    int c = 0;
    static int b = 2;
    if (m < b || n < b)
        return m * n;
    else if (m % b == 0 && n % b == 0)
    {
        c = b;
        return c * fun(m / b, n / b);
    }
    else
    {
        b++;
        return fun(m, n);
    }
}

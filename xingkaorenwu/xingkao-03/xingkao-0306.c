#include <stdio.h>

/**
 * �ο�����-3-6
 * �����1+x+x2+...+xn��ֵ������
 * �����
 */
// nΪ������
double SF(double x, int n)
{
    double p = 1, s = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        p *= x;
        s += p;
    }
    return s;
}

#include <stdio.h>

/**
 * �ο�����-3-10
 * �������������a��n��Ԫ���д��ڵ���ƽ����ֵ��Ԫ�ظ���
 * �����
 */
int LK(double a[], int n)
{
    double s = 0;
    int i, m = 0;
    for (i = 0; i < n; i++)
        s += a[i];
    s /= n;
    for (i = 0; i < n; i++)
        if (a[i] >= s)
            m++;
    return m;
}

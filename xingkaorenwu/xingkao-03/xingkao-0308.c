#include <stdio.h>

/**
 * �ο�����-3-8
 * ������a��˳�����ֵΪx��Ԫ�أ������ҳɹ��򷵻�1�����򷵻�
 * �����
 */
int WB(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return 1;
    return 0;
}

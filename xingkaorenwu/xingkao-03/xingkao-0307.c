#include <stdio.h>

/**
 * �ο�����-3-7
 * �ж�x�Ƿ�Ϊһ�����������򷵻�1�����򷵻�0
 * �����
 */
//xΪ���ڵ���2������
int SG(int x)
{
    int i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
            break;
        i++;
    }
    if (i * i <= x)
        return 0;
    else
        return 1;
}

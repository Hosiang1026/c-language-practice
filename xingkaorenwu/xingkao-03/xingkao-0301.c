#include <stdio.h>

/**
 * �ο�����-3-1
 * �����
 */
int WF(int x, int y)
{
    x = x + y;
    y = x + y;
    return x + y;
}
void main()
{
    int x = 5, y = 7;
    int z = WF(x, y);
    printf("z=%d\n", z);
}

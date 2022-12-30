#include <stdio.h>

/**
 * 形考任务-3-7
 * 判断x是否为一个质数，是则返回1，否则返回0
 * 输出：
 */
//x为大于等于2的整数
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

#include <stdio.h>

/**
 * 综合练习-6-11
 * 编写一个非递归函数过程，求出两个自然数m和n的最大公约数。
 * 输出: 1
 */
int fun5(int m, int n)
{
    int r;
    while (1)
    {
        if (n == 0)
            return m;
        r = m % n;
        m = n;
        n = r;
    }
}

void main(){
    int res = fun5(7, 22);
    printf("%d\n", res);
}
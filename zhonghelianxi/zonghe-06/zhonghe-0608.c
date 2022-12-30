#include <stdio.h>

/**
 * 综合练习-6-8
 * 输出: 1或5
 */
int ff3(int m, int n, int b)
{
    //5<3||9<3 false
    if (m < b || n < b)
        return 1;
    //5%5==0&&5%5==0
    else if (m % b == 0 && n % b == 0)
        //5*ff3(1, 1, 5) = 5*1 = 5
        return b * ff3(m / b, n / b, b);
    else
        return 1;
}

void main()
{
    int res = ff3(5, 9, 3);
    //int res = ff3(5, 5, 5);
    //输出: 1或5
    printf("%d\n", res);
}
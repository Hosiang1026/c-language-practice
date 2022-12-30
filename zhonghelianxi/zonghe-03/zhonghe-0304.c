#include <stdio.h>

/**
 * 综合练习-3-4
 * 输出: 2,5或5,2 ===> 1
 * 输出: 2,2 ===> 2
 */
void main()
{
    int x, y, a, p = 1;
    // 输入: 2,5或5,2
    // 输入: 2,2
    scanf("%d %d", &x, &y);
    // 2<5 true
    if (x < y)
    {
        // a=2
        // x=5
        // y=2
        a = x;
        x = y;
        y = a;
    }
    // 5%2==0 false
    // 2%2==0 true
    if (x % y == 0)
    {
        // 输出: 2
        printf("%d\n", y);
        return;
    }
    // a=2
    a = 2;
    // 2>=2 true
    while (y >= a)
        // 5%2==0 && 2%2==0 false
        if (x % a == 0 && y % a == 0)
        {
            x = x / a;
            y = y / a;
            p *= a;
        }
        else
            // a=a+1=3
            a++;
    // 输出:  1
    printf("%d\n", p);
}

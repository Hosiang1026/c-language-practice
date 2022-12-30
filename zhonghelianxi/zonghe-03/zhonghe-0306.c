#include <stdio.h>

/**
 * 综合练习-3-6
 * 输出: 3 ==> n=0
 * 输出: 5 ==> n=2
 */
void main()
{
    int x, i = 0, s = 0;
    // 输入: x=3
    // 输入: x=5
    scanf("%d", &x);
    do
    {
        i += 2;
        s += i * i;
        // i=i+2=2
        // s=s+(i*i)=0+(2*2)=4

        // 4<3 false
        // 4<5 true
        // i=2+2=4
        // s=4+(4*4)=20
    } while (s < x);
    // 输出:  n=0
    // 输出:  n=2
    printf("n=%d\n", i - 2);
}

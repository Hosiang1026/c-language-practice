#include <stdio.h>

/**
 * 综合练习-4-1
 * 输出: x=21
 */
void main()
{
    int a[8] = {10, 8, 6, 15, 9, 21, 8, 16};
    //x=10
    int i, x = a[0];
    for (i = 1; i < 8; i++)
        //i=5; 21>10 true
        if (a[i] > x)
            //x=21
            x = a[i];
    //输出: x=21
    printf("x=%d\n", x);
}

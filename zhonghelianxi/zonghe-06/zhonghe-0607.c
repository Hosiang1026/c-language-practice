#include <stdio.h>

/**
 * 综合练习-6-7
 * 输出: 2 3 
 */
int fn1()
{
    int x = 0;
    static int y = 0;
    x++;
    y++;

    //x=x+1=1
    //y=y+1=1
    //x1=x+y=2

    //x=x+1=1
    //y=y+1=2
    //x2=x+y=3
    return x + y;
}

void main()
{
    int x1 = fn1();
    int x2 = fn1();
    //输出: 2 3
    printf("%d %d\n", x1, x2);
}

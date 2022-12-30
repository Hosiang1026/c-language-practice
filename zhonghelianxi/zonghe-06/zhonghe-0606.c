#include <stdio.h>

/**
 *综合练习-6-6
 * 输出: 26 15
 */
void fn2(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;

    //x=15
    //*a=*b=26
    //*b=15
}

void main()
{
    int x = 15, y = 26;
    fn2(&x, &y);
    //输出: 26 15
    printf("%d %d\n", x, y);
}

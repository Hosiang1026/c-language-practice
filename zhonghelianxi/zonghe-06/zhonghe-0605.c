#include <stdio.h>

/**
 * 综合练习-6-5
 * 输出: 50 45
 */
int c = 15;
void main()
{
    int a = 10, b = 20;
    { 
        //b=25
        int b = a + 15;
        //输出: a+b+c=10+25+15=50
        printf("%d ", a + b + c);
    }
     //输出: a+b+c=10+20+15=45
    printf("%d\n", a + b + c);
}
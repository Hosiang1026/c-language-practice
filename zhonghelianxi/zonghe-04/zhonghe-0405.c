#include <stdio.h>

/**
 * 综合练习-4-5
 * 输出: test test1 test23 ===> test23
 */
void main()
{
    char a[10], b[10], c[10];
    int c1, c2, c3;
    //输入: test test1 test23
    scanf("%s %s %s", a, b, c);
    c1 = strlen(a);
    c2 = strlen(b);
    c3 = strlen(c);
    //c1=4 c2=5 c3=6
    //4>5&&4>6 false
    if (c1 > c2 && c1 > c3)
        printf("%s ", a);
    //5>4&&5>6 false
    else if (c2 > c1 && c2 > c3)
        printf("%s ", b);
    else
        //输出：test23
        printf("%s ", c);
} 

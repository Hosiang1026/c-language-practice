#include <stdio.h>

/**
 * 综合练习-6-1
 * 输出: 5
 */
void main()
{
    xk9(5);
   
}

void xk9(int x)
{
    char a[10];
    int i = 0, rem;
    do
    {
        rem = x % 8;
        x = x / 8;
        a[i] = 48 + rem; //'0'字符的ASCII码为48
        i++;

        //i=0
        //rem=5%8=5
        //x=5/8=0
        //a[0]=0+5=5
        //i=0+1=1

        // 0 !=0 false
    } while (x != 0);
    //1>0
    while (i > 0)
        //a[--i]=a[i=i-1]=a[0]=5
        //输出: 5
        printf("%c", a[--i]);
    printf("\n");
}
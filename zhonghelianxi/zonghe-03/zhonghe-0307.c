#include <stdio.h>

/**
 * 综合练习-3-7
 * 输出:  Yes!
 */
void main()
{
    int x = 37, k = 2;
    do
    {   //37%2==0 false
        //37%6==0 false
        if (x % k == 0)
            break;
        //k=k+1=3
        k++;
        //3*3<=37 true
        //7*7<=37 false
    } while (k * k <= x);
    //7*7>37
    if (k * k > x)
        //输出: Yes!
        printf("Yes!\n");
    else
   
        printf("No!\n");
}

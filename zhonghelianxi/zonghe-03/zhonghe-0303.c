#include <stdio.h>

/**
 * 综合练习-3-3
 * 输出: 3 ===> 3=3*1
*/
void main()
{
    int x, p = 2;
    //输入： x=3
    scanf("%d", &x);
    //3>=2
    while (x >= p)
        //3%2 == 0
        //3%3 == 0
        if (x % p == 0)
        {   
            //输出：3=3*1
            printf("%d=%d*%d\n", x, p, x / p);
            break;
        }
        else{
            //p=p+1=3
           p++;
        }
        
           
}

#include <stdio.h>

/**
 * 综合练习-3-5
 * 输出: x=12
*/
void main()
{
    int x = 36, y = 48, z; 
    do { 
        z = x % y; 
        x = y; 
        y = z; 
        //z=36%48=36
        //x=48
        //y=36

        //z=48%36=12
        //x=36
        //y=12

        //z=36%12=0
        //x=12
        //y=0
        }
        //0>0 false
    while (y > 0); 
        //输出:  x=12
        printf("x=%d\n", x);
}

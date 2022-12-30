#include <stdio.h>

/**
 * 综合练习-4-4
 * 输出: 94 90
 */
void main()
{   
    int a[3][4] = 
    {
        {60, 75, 83, 52}, 
        {76, 94, 88, 35}, 
        {80, 74, 46, 90}
    };
    //x=60;
    int i, j, x = a[0][0], y = -1;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (a[i][j] > x)
            {
                y = x;
                x = a[i][j];
            }
            else if (a[i][j] > y)
                y = a[i][j];

    //i=0;j=0; a[0][0] = 60 > 60 false; 60 > -1 true y=a[0][0]=60
    //i=0;j=1; a[0][1] = 75 > 60 true y=60 x=75 ;
    //i=0;j=2; a[0][2] = 83 > 75 true y=75 x=83 ;
    //i=0;j=3; a[0][3] = 52 > 83 false; 52 > -1 true y=52

    //i=1;j=0; a[1][0] =76 > 83 false; a[1][0] > -1 true y=76
    //i=1;j=1; a[1][1] =94 > 83 true y=83 x=94; 
    //i=1;j=2; a[1][2] =88 > 94 false; a[1][2] > -1 true y=88
    //i=1;j=3; a[1][3] =35 > 94 false; a[1][3] > -1 true y=35

    //i=2;j=0; a[2][0] =80 > 94 false; a[2][0] > -1 true y=80
    //i=2;j=1; a[2][1] =74 > 94 false; a[2][1] > -1 true y=74
    //i=2;j=2; a[2][2] =46 > 94 false; a[2][2] > -1 true y=46
    //i=2;j=3; a[2][3] =90 > 94 false; a[2][3] > -1 true y=90
    //输出: 94 90
    printf("%d %d\n", x, y);
}

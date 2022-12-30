#include <stdio.h>

/**
 * 综合练习-6-2
 * 输出: 
 * int x = 0 ===> 1
 * int x = 1 ===> 0
 */
void main()
{
    int a[5] = {1,2,3};
    int x = 0;
    //int x = 1;
    int res = wr1(a, 3, x);
    printf("%d", res);
}

int wr1(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        //i=0; a[0]==0 false   1
        //i=0; a[0]==1 true   0
        if (a[i] == x)
            return 1;
    return 0;
}

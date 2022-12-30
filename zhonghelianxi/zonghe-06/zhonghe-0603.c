#include <stdio.h>

/**
 * 综合练习-6-3
 * 输出: 
 * 1 2 3
 * 1 2 6
 */
void wr4(int a[], int b[], int n)
{
    int i;
    //b[0]=0
    //b[1]=0
    b[0] = b[1] = 0;
    for (i = 0; i < n; i++)
        //a[0]%2==0 true
        if (a[i] % 2 == 0)
           //b[0]=b[0]+1
            b[0]++;
        else
            //b[1]=b[1]+1
            b[1]++;

    printf("%d %d %d\n", a[0], a[1], a[2]);
    printf("%d %d %d\n", b[0], b[1], b[2]);
}

void main()
{
    int a[5] = {1, 2, 3};
    int b[5] = {4, 5, 6};
    int n = 3;
    wr4(a, b, n);
    
}
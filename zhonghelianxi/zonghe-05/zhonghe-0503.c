#include <stdio.h>

/**
 * 综合练习-5-3
 * 输出: 4 5
 * 0 false
 * 1 true
 */
void main()
{
    int i, n, *a;
    do
        //输入: 1  
        //输入: 2
        scanf("%d", &n);
    while (n < 2);
    a = calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
        if (i % 2)
          //i=1, a[1]=2*2+1=5
            a[i] = 2 * n + i;
        else
        //i=0, a[0]=2*2-0=4 
            a[i] = 2 * n - i;
    for (i = 0; i < n; i++)
        //i=0, a[0] = 4
        //i=1, a[1] = 5
        //输出: 4 5
        printf("%d\n", a[i]);
}

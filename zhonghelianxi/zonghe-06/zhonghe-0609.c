#include <stdio.h>

/**
 * 综合练习-6-9
 * 编写一个函数，求出一维整型数组a[n]中所有元素的平方之和。
 * 输出: 220
 */
int fun1(int a[], int n)
{
    int i, s = 0;
    for (i = 0; i < n; i++)
        s += a[i] * a[i];
    return s;
}

void main(){
    int a[] = {2, 4, 6, 8, 10};
    int res = fun1(a, 5);
    printf("%d", res);
    //4+16+36+64+100=220
}

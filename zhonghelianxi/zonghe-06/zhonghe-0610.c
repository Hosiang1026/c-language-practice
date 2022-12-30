#include <stdio.h>

/**
 * 综合练习-6-10
 * 编写一个函数，分别求出一维整型数组a[n]中所有奇数元素的个数和所有偶数元素的个数，假定分别用c1和c2所指的对象保存。
 * 输出:1 4
 */
void fun2(int a[], int n, int *c1, int *c2)
{
    int i;
    *c1 = *c2 = 0;
    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            (*c1)++;
        else
            (*c2)++;
}

void main(){
    int c1=1, c2=1;
    int a[] = {2, 4, 6, 1, 10};
    fun2(a, 5, c1, c2);
    printf("%d %d\n", &c1, &c2);
}
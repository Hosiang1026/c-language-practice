#include <stdio.h>

/**
 * 形考任务-2-12
 * 编写一个递归函数“int FF(int a[], int n)”，求出数组a中所有n个元素之积并返回。
 * 输出：
 */
void main()
{
    int i = 0;
    double s = 0;
    // 或int i=1; double s=1;
    while (s < 5)
        s += (double)1 / ++i;
    printf("n=%d\n", i);
}

#include <stdio.h>

/**
 * 形考任务-2-11
 * 编写一个函数，函数头格式为“double Mean(double a[M][N],int m,int n)”，要求返回二维数组a[m][n]中所有元素的平均值，假定在计算过程中采用变量v存放平均值。
 * 输出：
 */
double Mean(double a[M][N], int m, int n)
{
    int i, j;
    double v = 0.0;
for (i=0; iint FF(int a[] , int n) {
        int mul = 1;
        if (n == 1)
            mul *= a[0];
        else
            mul = a[n - 1] * FF(a, n - 1);
        return mul;
}

/*void main()
{
int a[6]={1,2,3,4,5,6};
printf("%d\n",FF(a,6));
}*/

#include <stdio.h>

/**
 * 形考任务-2-13
 * 编写一个主函数，求出满足不等式22 +42 +...+n2 <1000的最大n值，假定分别用i和s作为取偶数值和累加值的变量，并限定使用do循环编程。
 * 输出：
 */

void main()
{
    int i = 0;
    // 用i作为依次取值偶数的变量
    int s = 0;
    // 用s作为累加变量
    do
    {
        i += 2;
        s += i * i;
    } while (s < 1000);
    printf("n=%d\n", i - 2);
}
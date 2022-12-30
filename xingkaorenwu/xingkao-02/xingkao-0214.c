#include <stdio.h>

/**
 * 形考任务-2-14
 * 编写一个主函数，计算并输出12 +22 +...+n2 值，其中n值由键盘输入
 * 输出：
 */
void main()
{
    int i;
    // 用i作为计数(循环)变量
    int s = 0;
    // 用s作为累加变量
    int n;
    printf("输入一个自然数: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s += i * i;
    printf("s=%d\n", s);
}

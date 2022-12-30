#include <stdio.h>

/**
 * 形考任务-4-4
 * 从键盘输入n个work类型的记录到一堆数组a中
 * 输出：
 */
void QA(struct Worker a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
        scanf("%s %d %f", &a[i].name, &a[i].age, &a[i].pay);
}

// 假定结构类型struct Worker 的定义如下：
struct Worker
{
    char name[15];
    int age;
    float pay;
};

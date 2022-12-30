#include <stdio.h>

/**
 * 形考任务-4-1
 * 输出：
 */
struct Worker
{
    char name[15]; // 姓名
    int age;       // 年龄
    float pay;     // 工资
};
void main()
{
    struct Worker x = {"wanghua", 52, 4300};
    struct Worker y, *p;
    y = x;
    p = &x;
    printf("%s %d %6.2f\n", x.name, y.age, p->pay);
}

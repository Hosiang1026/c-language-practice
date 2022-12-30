#include <stdio.h>
#include <string.h>

/**
 * 形考任务-4-2
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
    struct Worker x;
    char *t = "liouting";
    int d = 38;
    float f = 3493;
    strcpy(x.name, t);
    x.age = d;
    x.pay = f;
    printf("%s %d %6.0f\n", x.name, x.age, x.pay);
}

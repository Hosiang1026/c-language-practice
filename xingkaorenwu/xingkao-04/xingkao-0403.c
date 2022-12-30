#include <stdio.h>

/**
 * 形考任务-4-3
 * 输出：
 */
struct Worker
{
    char name[15];
    int age;
    float pay;
};
int Less(struct Worker r1, struct Worker r2)
{
    if (r1.age < r2.age)
        return 1;
    else
        return 0;
}
void main()
{
    struct Worker a[4] = {{"abc", 25, 2420}, {"def", 58, 4638}, {"ghi", 49, 4260}, {"jkl", 36, 3750}};
    struct Worker x = a[0];
    int i;
    for (i = 1; i < 4; i++)
        if (Less(x, a[i]))
            x = a[i];
    printf("%s %d %6.0f\n", x.name, x.age, x.pay);
}

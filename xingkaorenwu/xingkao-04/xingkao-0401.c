#include <stdio.h>

/**
 * �ο�����-4-1
 * �����
 */
struct Worker
{
    char name[15]; // ����
    int age;       // ����
    float pay;     // ����
};
void main()
{
    struct Worker x = {"wanghua", 52, 4300};
    struct Worker y, *p;
    y = x;
    p = &x;
    printf("%s %d %6.2f\n", x.name, y.age, p->pay);
}

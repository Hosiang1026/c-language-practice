#include <stdio.h>
#include <string.h>

/**
 * �ۺ���ϰ-7-3
 * ���:
 */
struct Worker
{
    char name[15];
    int age;
    int pay;
};
void main()
{
    struct Worker x, *p = &x;
    strcpy(x.name, "weirong");
    x.age = 35;
    x.pay = 2600;
    p->age += 12;
    p->pay += 1200;
    printf("%s %d\n", p->name, x.age);
}

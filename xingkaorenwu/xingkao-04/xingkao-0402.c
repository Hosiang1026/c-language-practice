#include <stdio.h>
#include <string.h>

/**
 * �ο�����-4-2
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
    struct Worker x;
    char *t = "liouting";
    int d = 38;
    float f = 3493;
    strcpy(x.name, t);
    x.age = d;
    x.pay = f;
    printf("%s %d %6.0f\n", x.name, x.age, x.pay);
}

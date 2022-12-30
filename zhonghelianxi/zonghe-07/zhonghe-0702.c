#include <stdio.h>

/**
 * 综合练习-7-2
 * 输出:
 */
struct intNode *xb5(int n)
{
    struct intNode *f, *p;
    if (n == 0)
        return NULL;
    f = p = malloc(sizeof(struct intNode));
    printf("从键盘输入%d 个整数: ", n);
    while (n--)
    {
        scanf("%d", &(p->data));
        if (n == 0)
        {
            p->next = NULL;
            break;
        }
        p->next = malloc(sizeof(struct intNode))
            p = p->next;
    }
    // 填空;
}

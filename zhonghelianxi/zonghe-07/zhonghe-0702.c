#include <stdio.h>

/**
 * �ۺ���ϰ-7-2
 * ���:
 */
struct intNode *xb5(int n)
{
    struct intNode *f, *p;
    if (n == 0)
        return NULL;
    f = p = malloc(sizeof(struct intNode));
    printf("�Ӽ�������%d ������: ", n);
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
    // ���;
}

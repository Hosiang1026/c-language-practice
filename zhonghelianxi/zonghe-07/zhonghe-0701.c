#include <stdio.h>

/**
 * �ۺ���ϰ-7-1
 * ���:
 */
int xb3(struct intNode *f)
{
    int x = 0;
    while (f != NULL)
    {
        if (f->data > x)
            x = 1;
        f = f->next;
    }
    return x;
}

void main()
{
    struct IntNode *p1;
    p1=createList();
    xb3(p1);
}
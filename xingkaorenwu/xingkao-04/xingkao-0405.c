#include <stdio.h>

/**
 * 形考任务-4-5
 * 统计出以指针表头为f的链表中的结点个数
 * 输出：
 */
int Count(struct IntNode *f)
{ // f为指向一个单链表的表头指针
    int c = 0;
    while (f)
    {
        c++;
        f = f->next;
    }
    return c;
}
// 假定struct IntNode的类型定义为：
struct IntNode
{
    int data;
    IntNode *next;
};

#include <stdio.h>

/**
 * �ο�����-4-5
 * ͳ�Ƴ���ָ���ͷΪf�������еĽ�����
 * �����
 */
int Count(struct IntNode *f)
{ // fΪָ��һ��������ı�ͷָ��
    int c = 0;
    while (f)
    {
        c++;
        f = f->next;
    }
    return c;
}
// �ٶ�struct IntNode�����Ͷ���Ϊ��
struct IntNode
{
    int data;
    IntNode *next;
};

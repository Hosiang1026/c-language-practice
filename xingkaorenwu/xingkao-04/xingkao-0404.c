#include <stdio.h>

/**
 * �ο�����-4-4
 * �Ӽ�������n��work���͵ļ�¼��һ������a��
 * �����
 */
void QA(struct Worker a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
        scanf("%s %d %f", &a[i].name, &a[i].age, &a[i].pay);
}

// �ٶ��ṹ����struct Worker �Ķ������£�
struct Worker
{
    char name[15];
    int age;
    float pay;
};

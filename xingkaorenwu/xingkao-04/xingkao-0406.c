#include <stdio.h>

/**
 * �ο�����-4-6
 * ��������������ɸ��ַ������浽��fname������ָ�����ı��ļ���
 * �����
 */
void xw1(char *fname)
{
    FILE *fout = fopen(fname, "w");
    char a[20];
    printf("ÿ���ַ�������С��20���ַ���end��Ϊ������־\n");
    while (1)
    {
        scanf("%s", a);
        if (strcmp(a, "end") == 0)
            break;
        fputs(a, fout);
        fputc('\n', fout);
    }
    fclose(fout);
}

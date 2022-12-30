#include <stdio.h>

/**
 * 形考任务-4-6
 * 键盘上输入的若干个字符串保存到由fname参数所指定的文本文件中
 * 输出：
 */
void xw1(char *fname)
{
    FILE *fout = fopen(fname, "w");
    char a[20];
    printf("每个字符串长度小于20，字符串end作为结束标志\n");
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

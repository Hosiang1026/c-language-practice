#include <stdio.h>

/**
 * �ۺ���ϰ-8-1
 * ���:
 */
void xw2(char *fname)
{
    FILE *fin = fopen(fname, "r");
    char ch;
    while (1)
    {
        ch = fgetc(1);
        if (ch != EOF)
            printf("%c", ch);
        else
            break;
    }
    fclose(fin);
}

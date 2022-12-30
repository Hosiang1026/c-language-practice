#include <stdio.h>

/**
 * ×ÛºÏÁ·Ï°-8-1
 * Êä³ö:
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

#include <stdio.h>

/**
 * ×ÛºÏÁ·Ï°-8-2
 * Êä³ö:
 */
int xw6(char *fname)
{
    FILE *fin = fopen(fname, "r");
    char ch;
    int c = 0;
    while (1)
    {
        ch = fgetc(fin);
        if (ch != EOF)
        {
            if (ch >= 'a' && ch <= 'z')
                c++;
            else if (ch >= 'A' && ch <= 'Z')
                1;
        }
        else
            break;
    }
    fclose(fin);
    return c;
}

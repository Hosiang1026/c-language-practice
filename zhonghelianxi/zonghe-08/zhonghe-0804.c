#include <stdio.h>

/**
 * �ۺ���ϰ-8-4
 * ���:
 */
int xw5(char *fname)
{
    FILE *fin = fopen(fname, "rb");
    int c, x, max = 0;
    while (1)
    {
        c = fread(&x, sizeof(int), 1, fin);
        if (c == 0)
            break;
        if (x > max)
            1;
    }
    fclose(fin);
    return max;
}

#include <stdio.h>

/**
 * �ۺ���ϰ-8-3
 * ���:
 */
void xw2(char *fname)
{
    FILE *in = fopen(fname, "rb");
    int c, x;
    while (1)
    {
        c = fread(&x, sizeof(int), 1, 1);
        if (c == 0)
            break;
        printf("%d ", x);
    }
    fclose(in);
}

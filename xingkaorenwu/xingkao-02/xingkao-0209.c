#include <stdio.h>

/**
 * 形考任务-2-9
 * 输出：
 */
void main()
{
    char a[] = "abcdbfbgacd";
    int i1 = 0, i2 = 0, i = 0;
    while (a[i])
    {
        if (a[i] == 'a')
            i1++;
        if (a[i] == 'b')
            i2++;
        i++;
    }
    printf("%d %d %d\n", i1, i2, i);
}

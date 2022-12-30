#include <stdio.h>

/**
 * 综合练习-4-6
 * 输出: 2 1 2 11
 */
void main()
{
    char a[] = "abcdbfbgacd";
    int i = 0, i1 = 0, i2 = 0, i3 = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        switch (a[i])
        {
        case 'a':
        // i=0; a[0]=a i1=1
        // i=8; a[8]=a i1=2
            i1++;
            break;
        case 'b':
        // i=1; a[1]=b i2=1
            i2++;
            break;
        case 'c':
        // i=2; a[2]=c i3=1
        // i=9; a[9]=c i3=2
            i3++;
            break;
        }
    }
    //输出: 2 1 2 11
    printf("%d %d %d %d\n", i1, i2, i3, i);
}

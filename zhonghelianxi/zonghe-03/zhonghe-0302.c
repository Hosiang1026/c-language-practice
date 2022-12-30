#include <stdio.h>

/**
 * 综合练习-3-2
 * 输出：s=56
*/
void main()
{
    int i = 0, s = 0;
    while (s < 50)
    {
        i += 2;
        s += i * i;
        // i=i+2; s=s+(i*i)
        // i=2 ; s=4
        // i=4 ; s=20
        // i=6 ; s=56
    }
    printf("s=%d\n", s);
}

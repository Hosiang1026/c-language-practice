#include <stdio.h>

/**
 * 综合练习-3-1
 * 输出：无
*/
const int N = 100;
int main()
{
    int a, b;
    for (a = 2; a <= N; a++)
    {
        // a=2
        // a=3
        // a=4
        for (b = 2; b * b <= a; b++)
        {
            //2%2==0 break;
            //3%3==0 break;
            //4%4==0 break;
            if (a % b == 0)
            {
                break;
            }
            if (b * b > a)
            {
                printf("%d ", a);
            }
        }
    }
    return 0;
}

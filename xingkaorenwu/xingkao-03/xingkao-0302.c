#include <stdio.h>
#include <string.h>

/**
 * 形考任务-3-2
 * 输出：
 */
void fun(char ss[]);
void main()
{
    char s[15] = "0123456789";
    fun(s);
    printf("%s\n", s);
}
void fun(char ss[])
{
    int i, n = strlen(ss);
    for (i = 0; i < n / 2; i++)
    {
        char c = ss[i];
        ss[i] = ss[n - 1 - i];
        ss[n - 1 - i] = c;
    }
}

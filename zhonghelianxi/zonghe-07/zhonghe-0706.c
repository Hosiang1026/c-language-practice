#include <stdio.h>
#include <stdlib.h>

/**
 * �ۺ���ϰ-7-6
 * ���:
 */
struct CCC
{
    char *a;
    int n;
};
void main(void)
{
    int n;
    struct CCC *a;
    scanf("%d", &n);
    a = calloc(n, sizeof(struct CCC));
    printf("%d\n", n * sizeof(struct CCC));
}

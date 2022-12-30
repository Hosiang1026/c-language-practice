#include <stdio.h>
#include <stdlib.h>

/**
 * ×ÛºÏÁ·Ï°-7-6
 * Êä³ö:
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

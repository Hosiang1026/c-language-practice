#include <stdio.h>

/**
 * 综合练习-4-7
 * 输出:  134321
 */
void main()
{
    char a[] = "12342 34534 2356";
    int i, c[7] = {0};
    for (i = 0; a[i] != '\0'; i++)
        c[a[i] - 48]++; // 48Ϊ�����ַ�0��ASCII��

       //i=0 c[1] = c[a[0]]=c[1]+1=1
       //i=1 c[2] = c[a[1]]=c[2]+1=1
       //i=2 c[3] = c[a[2]]=c[3]+1=1
       //i=3 c[4] = c[a[3]]=c[4]+1=1
       //i=4 c[2] = c[a[4]]=c[2]+1=2

       //i=5 c[3] = c[a[5]]=c[3]+1=2
       //i=6 c[4] = c[a[6]]=c[4]+1=2
       //i=7 c[5] = c[a[7]]=c[5]+1=1
       //i=8 c[3] = c[a[8]]=c[3]+1=3
       //i=9 c[4] = c[a[9]]=c[4]+1=3

       //i=10 c[2] = c[a[10]]=c[2]+1=3
       //i=11 c[3] = c[a[11]]=c[3]+1=4
       //i=12 c[5] = c[a[12]]=c[5]+1=2
       //i=13 c[6] = c[a[13]]=c[6]+1=1

    //c[]="0 1 3 4 3 2 1"
    for (i = 1; i < 7; i++)
    //c[1] ~c[6],输出: 134321
        printf("%d ", c[i]);
        
}

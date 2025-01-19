#include <stdio.h>

int main()
{
    char a[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *tmp = a + 10;
    printf("%c\n", *(tmp - 10));
    printf("%d %d %d\n", &a[0], &a[1], &tmp[3]);
    printf("%c\n", *(&tmp[3] + 2));
}
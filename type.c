#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main()
{

    int foo;
    int bar = 1;
    printf("%d %d\n", foo, bar);

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d\n", a);

    BOOL true;
    true = TRUE;
    printf("%d", true);
    return 0;
}
#include <stdio.h>
int a = 0;
int sum(int num)
{
    static int output = 0;
    output += num;
    return output;
}

int main()
{
    printf("%d\n", a);
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));
    return 0;
}
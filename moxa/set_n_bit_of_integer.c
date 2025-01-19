void transfer(int *val, int n);

#include <stdio.h>

int main(int argc, char *argv[])
{
    int number = 0;
    printf("Original value: %d\n", number);
    transfer(&number, 1);
    printf("Modified value: %d\n", number);
    return 0;
}

void transfer(int *val, int n)
{
    *val = *val | 1 << n;
}

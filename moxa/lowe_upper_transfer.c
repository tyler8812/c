#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; a[i] != '\0'; i++) // Loop until null terminator
    {
        if (a[i] >= 'A' && a[i] <= 'Z') // Check if uppercase
        {
            a[i] += 32; // Convert to lowercase
        }
        else if (a[i] >= 'a' && a[i] <= 'z') // Check if lowercase
        {
            a[i] -= 32; // Convert to uppercase
        }
    }

    printf("%s\n", a); // Print the transformed string

    return 0;
}

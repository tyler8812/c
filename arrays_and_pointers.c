#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;
    int i;

    // Print the addresses
    for (i = 0; i < 5; i++)
    {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    // Print the values
    for (i = 0; i < 5; i++)
    {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

    // Allocate memory to store five characters
    int n = 5;
    char *pvowels2 = (char *)malloc(n * sizeof(char));

    pvowels2[0] = 'A';
    pvowels2[1] = 'E';
    *(pvowels2 + 2) = 'I';
    pvowels2[3] = 'O';
    *(pvowels2 + 4) = 'U';

    for (int i = 0; i < n; i++)
    {
        printf("%c ", pvowels2[i]);
    }

    printf("\n");

    free(pvowels2);

    int nrows = 2;
    int ncols = 5;

    // Allocate memory for nrows pointers
    char **pvowels3 = (char **)malloc(nrows * sizeof(char *));

    // For each row, allocate memory for ncols elements
    pvowels3[0] = (char *)malloc(ncols * sizeof(char));
    pvowels3[1] = (char *)malloc(ncols * sizeof(char));

    pvowels3[0][0] = 'A';
    pvowels3[0][1] = 'E';
    pvowels3[0][2] = 'I';
    pvowels3[0][3] = 'O';
    pvowels3[0][4] = 'U';

    pvowels3[1][0] = 'a';
    pvowels3[1][1] = 'e';
    pvowels3[1][2] = 'i';
    pvowels3[1][3] = 'o';
    pvowels3[1][4] = 'u';

    for (int i = 0; i < nrows; i++)
    {
        for (int j = 0; j < ncols; j++)
        {
            printf("%c ", pvowels3[i][j]);
        }

        printf("\n");
    }

    // Free individual rows
    free(pvowels3[0]);
    free(pvowels3[1]);

    // Free the top-level pointer
    free(pvowels);
    return 0;
}
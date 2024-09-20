#include <stdio.h>

int main()
{

    int numbers[10];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    printf("The 7th number in the array is %d\n", numbers[6]);

    // int grades[3];
    // int average;

    // grades[0] = 80;
    // grades[1] = 85;
    // grades[2] = 90;

    // average = (grades[0] + grades[1] + grades[2]) / 3;
    // printf("The average of the 3 grades is: %d\n", average);

    int foo[1][2][3];
    char vowels1[1][5] = {{'a', 'e', 'i', 'o', 'u'}};
    char vowels2[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}};

    int a1[3][4] = {
        {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
        {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
        {8, 9, 10, 11} /*  initializers for row indexed by 2 */
    };
    int a2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int val = a2[2][3];
    printf("%d\n", val);

    float average;
    int grades[2][5];
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < 2; i++)
    {
        average = 0;
        for (j = 0; j < 5; j++)
        {
            average += grades[i][j];
        }
        average /= 5;
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}
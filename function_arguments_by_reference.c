#include <stdio.h>
void addone(int n);
void addone_with_pointer(int *n);
typedef struct
{
    int x;
    int y;
} point;
typedef struct
{
    char *name;
    int age;
} person;
void birthday(person *p);
void move(point *p);

int main(void)
{

    int n = 0;
    printf("Before: %d\n", n);
    addone_with_pointer(&n);
    printf("After: %d\n", n);
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

    return 0;
}

void addone(int n)
{
    // n is local variable which only exists within the function scope
    n++; // therefore incrementing it has no effect
}

void addone_with_pointer(int *n)
{

    (*n)++;
}

void move(point *p)
{
    p->x++;
    p->y++;
}

void birthday(person *p)
{
    (*p).age++;
    p->age++;
}
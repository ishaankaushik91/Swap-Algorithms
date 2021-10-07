// Using 3rd party variable

#include<stdio.h>
int main()
{
    int a = 4, b = 8;
    printf("Old value of a = %d & that of b = %d\n", a, b);

    int temp = a; // Value of a is in temp now
    a = b; // a is now 8
    b = temp; // b is now 4
    printf("New value of a = %d & that of b = %d\n", a, b);

    return 0;
}
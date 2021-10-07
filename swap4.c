// Bitwise using ^ :


#include<stdio.h>
int main()
{
    int a = 4, b = 8;
    printf("Old value of a = %d & that of b = %d\n", a, b);

    a = a ^ b; //  a is now 12
    b = a ^ b; // b is now 4
    a = a ^ b; // a is now 8

    printf("New value of a = %d & that of b = %d\n", a, b);
    return 0;
}
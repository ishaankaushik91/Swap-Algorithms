// Using ~ & ^

#include<stdio.h>
int main()
{
    int a = 4, b = 8;
    printf("Old value of a = %d & that of b = %d\n", a, b);

    a = ~(a ^ b);
    b = ~(a ^ b); 
    a = ~(a ^ b); 


    printf("New value of a = %d & that of b = %d\n", a, b);
    return 0;
}
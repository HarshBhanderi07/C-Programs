#include <stdio.h>

int main() 
{
    int a, b, temp;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First value = %d\n", a);
    printf("Second value = %d\n", b);

    return 0;
}
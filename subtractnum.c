#include <stdio.h>

int main() 
{
    int x, y, difference;

    
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    
    difference = x - y;

    
    printf("Difference = %d\n", difference);

    return 0;
}
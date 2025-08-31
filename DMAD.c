#include <stdio.h>

int main() 
{
    int x, y;
    int sum, difference, product;
    float quotient;

    
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    
    sum = x + y;

    
    difference = x - y;

    
    product = x * y;

    
    if (y != 0) 
    {
        quotient = (float)x / y;
        printf("Quotient = %.2f\n", quotient);
    } else 
    {
        printf("Cannot divide by zero.\n");
    }

    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}
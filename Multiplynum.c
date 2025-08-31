#include <stdio.h>
int main() 
{
    int x, y, product;

    
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    
    product = x * y;

    
    printf("Product = %d\n", product);

    return 0;
}
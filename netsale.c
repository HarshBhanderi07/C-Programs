#include <stdio.h>

int main() 
{
    float gross_sales, discount, net_sales;

    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    discount = gross_sales * 0.10;
    net_sales = gross_sales - discount;

    printf("Net Sales = %.2f\n", net_sales);

    return 0;
}
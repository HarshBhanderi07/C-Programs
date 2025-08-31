#include <stdio.h>

int main() 
{
    int dollars, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%d", &dollars);

    pounds = dollars * 15;

    printf("%d Dollars = %d Pounds\n", dollars, pounds);

    return 0;
}
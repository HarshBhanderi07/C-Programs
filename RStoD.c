#include <stdio.h>

int main() 
{
    float rupees, dollars;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 45;

    printf("%.2f Rupees = %.2f Dollars\n", rupees, dollars);
    return 0;
}
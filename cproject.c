
#include <stdio.h>

int main()
{
    char name[30];
    int meterNo;
    int previous, current, units;
    float rate, bill;
    float fixedCharge = 50;

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter meter number: ");
    scanf("%d", &meterNo);

    printf("Enter previous reading: ");
    scanf("%d", &previous);

    printf("Enter current reading: ");
    scanf("%d", &current);

    printf("Enter rate per unit: ");
    scanf("%f", &rate);

    if (previous < 0 || current < previous || rate <= 0)
    {
        printf("Invalid input!");
    }
    else
    {
        units = current - previous;
        bill = units * rate + fixedCharge;

        printf("\n--- Electricity Bill ---\n");
        printf("Customer Name: %s\n", name);
        printf("Meter Number: %d\n", meterNo);
        printf("Previous Reading: %d\n", previous);
        printf("Current Reading: %d\n", current);
        printf("Units Consumed: %d\n", units);
        printf("Rate per Unit: Rs. %.2f\n", rate);
        printf("Fixed Charge: Rs. %.2f\n", fixedCharge);
        printf("Total Bill: Rs. %.2f\n", bill);
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float distance, fuel;

    printf("Enter total distance covered in kilometers: ");
    scanf("%g", &distance);
    printf("Total Fuel consumed: ");
    scanf("%g", &fuel);

    float mileage;

    mileage = distance / fuel;

    printf("Bike's average consumption is %g. ", mileage);

    return 0;
}

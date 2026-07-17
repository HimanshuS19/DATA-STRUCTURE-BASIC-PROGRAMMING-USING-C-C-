//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Celsius to Fahrenheit Conversion in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter Temperature in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("\nTemperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
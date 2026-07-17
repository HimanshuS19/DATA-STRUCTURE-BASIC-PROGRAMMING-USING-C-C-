//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Area and Circumference of Circle in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

int main()
{
    float radius, area, circumference;

    printf("Enter Radius : ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea = %.2f", area);
    printf("\nCircumference = %.2f\n", circumference);

    return 0;
}
//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Simple and Compound Interest in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float p, r, t, si, ci;

    printf("Enter Principal Amount : ");
    scanf("%f", &p);

    printf("Enter Rate of Interest : ");
    scanf("%f", &r);

    printf("Enter Time (Years) : ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    ci = p * pow((1 + r / 100), t) - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f\n", ci);

    return 0;
}
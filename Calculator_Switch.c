//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Simple Calculator using Switch Case in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1, num2;
    char op;

    printf("Enter First Number : ");
    scanf("%f",&num1);

    printf("Enter Operator (+,-,*,/,%%) : ");
    scanf(" %c",&op);

    printf("Enter Second Number : ");
    scanf("%f",&num2);

    switch(op)
    {
        case '+':
            printf("\nResult = %.2f",num1+num2);
            break;

        case '-':
            printf("\nResult = %.2f",num1-num2);
            break;

        case '*':
            printf("\nResult = %.2f",num1*num2);
            break;

        case '/':
            if(num2!=0)
                printf("\nResult = %.2f",num1/num2);
            else
                printf("\nDivision by Zero is Not Allowed.");
            break;

        default:
            printf("\nInvalid Operator.");
    }

    return 0;
}
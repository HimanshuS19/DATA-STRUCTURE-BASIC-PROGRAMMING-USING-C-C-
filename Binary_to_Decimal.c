//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Binary to Decimal Conversion in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long binary;
    int decimal=0,remainder,i=0;

    printf("Enter a Binary Number : ");
    scanf("%lld",&binary);

    while(binary!=0)
    {
        remainder=binary%10;
        decimal=decimal+remainder*pow(2,i);
        binary=binary/10;
        i++;
    }

    printf("\nDecimal Number = %d",decimal);

    return 0;
}
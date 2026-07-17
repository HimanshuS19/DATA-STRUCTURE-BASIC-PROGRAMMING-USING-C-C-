//-------------BY HIMANSHU SINGH---------------//
//The Below Program is for Finding Greatest of Three Numbers in C using VS CODE//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        printf("\nGreatest Number = %d",a);

    else if(b>=a && b>=c)
        printf("\nGreatest Number = %d",b);

    else
        printf("\nGreatest Number = %d",c);

    return 0;
}
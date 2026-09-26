#include <stdio.h>
int main() 
{
    int balance;

    printf("ENTER REMAINING BALANCED : ");
    scanf("%d",&balance);

    if (balance < 500)
    {
        printf("LOW BALANCE ");
    }

    else if(balance > 500 && balance < 2000)
    {
        printf("SUFFICIENT BALANCE ");
    }

    else
    {
        printf("PREMIUM BALANCE ");
    }
    
    return 0;
}
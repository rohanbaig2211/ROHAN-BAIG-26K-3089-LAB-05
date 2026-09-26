#include<stdio.h>
int main()
{
    int restaurantOpen , itemAvailable , balanceSufficient ;

printf("ENTER RESTAURANT OPENING 1(YES) AND 0(NO) : ");
scanf("%d",&restaurantOpen);

printf("ENTER ITEM AVAILABLE 1(YES) AND 0(NO) : ");
scanf("%d",&itemAvailable);

printf("ENTER BALANCED SUFFICIENT 1(YES) AND 0(NO) : ");
scanf("%d",&balanceSufficient);

if (restaurantOpen == 1)
{
    if (itemAvailable == 1)
    {
        if (balanceSufficient == 1)
        {
            printf("you have appropriate order status.");
        }
        else
        {
          printf("your balance is not able to go in restaurant.");
        }
    }
    else
    {
        printf("your order is not available.");  
    }
}
    else
    {
        printf("The resturant is not open");  
    }

return 0 ;

}
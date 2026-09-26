#include<stdio.h>
int main()
{
    int choice;
    printf("ENTER CHOICE: ENTER 1 , 2 , 3 , 4  => ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1: 
            float Balance_Inquiry ;
            printf("ENTER BALANCE (TOTAL AMOUNT) :");
            scanf("%f",&Balance_Inquiry);
            break;
    
        case 2:
            float chase_withdrawal ;
            printf("ENTER AMOUNT THAT YOU WOULD WITHDRAW : ");
            scanf("%f",&chase_withdrawal);

            int chase_choice;
            printf("ENTER CHOICE: ENTER 1 , 2   => ");
            scanf("%d",&case_choice);

            switch (chase_choice)
            {
                case 1:
                    printf("you have a saving account")
                    break;
                    
                case 2:
                    printf("you have a current account ");
                    break;

                default:
                    printf("----");
                    break;
            }
            break;
    
        case 3:
            float case_deposit;
            printf("ENTER AMOUNT THAT YOU WOULD WITHDRAW : ");
            scanf("%f",&case_deposit);
            break;
        
        case 4:
            int pin;
            printf("YOU WANT TO CHANGE YOUR PIN : ");
            scanf("%d",&pin);
            break;
    
        default:
            printf("----");
            break;
    }

    return 0 ;
}
#include <stdio.h>
int main() 
{
    int appointment , doctorAvailable , registrationCompleted;
    printf("ENTER APPOINTMENT : 1(YES) / 0(NO) :");
    scanf("%d",&appointment);

    printf("ENTER DOCTOR AVAILABLE : 1(YES) / 0(NO) : ");
    scanf("%d",&doctorAvailable);

    printf("ENTER REGISTRATION COMPLETE : 1(YES) / 0(NO) : ");
    scanf("%d",&registrationCompleted);

    if (appointment == 1)
    {
        if (doctorAvailable == 1)
        {
            if (registrationCompleted == 1)
            {
                printf("PATIENT MEET THE DOCTOR ");
            }

            else
            {
                printf("YOU ARE NOT REGISTOR ");   
            }
        }

        else
        {
         printf("THE DOCTOR IS NOT AVAILABLE ");
        }
    }
    
    else
    {
        printf("YOU ARE NOT MEET THE DOCTOR");
    }
    

    return 0;
}
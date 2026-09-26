#include <stdio.h>
int main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 15)
    {
        printf("Cold");
    }

    else if (temp <= 30 && temp >= 15) 
    {
        printf("Normal");
    }

    else 
    {
        printf("Hot");
    }

    return 0;
}
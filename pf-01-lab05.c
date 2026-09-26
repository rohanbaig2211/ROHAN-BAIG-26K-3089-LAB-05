#include <stdio.h>

int main() {
    int age, marks;
    printf("Enter student's age: ");
    scanf("%d", &age);
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (age >= 18) {
        if (marks >= 50) {
            printf("Eligible for Admission\n");
        } else {
            printf("Not Eligible: Marks less than 50\n");
        }
    } else {
        printf("Not Eligible: Age less than 18\n");
    }
    return 0;
}
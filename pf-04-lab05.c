#include <stdio.h>

int main() {
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    // Using only ternary operator, no if-else
    printf("%s\n", (marks >= 50) ? "Pass" : "Fail");

    return 0;
}
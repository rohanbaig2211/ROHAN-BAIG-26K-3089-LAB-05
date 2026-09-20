#include <stdio.h>

int main() {
    int dept, section;
    printf("Select Department:\n1=Computer Science\n2=Information Technology\n3=Artificial Intelligence\n");
    printf("Enter choice: ");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("Department: Computer Science\n");
            printf("Select Section: 1=Section A, 2=Section B: ");
            scanf("%d", &section);
            switch (section) {
                case 1: printf("Selected: Computer Science - Section A\n"); break;
                case 2: printf("Selected: Computer Science - Section B\n"); break;
                default: printf("Invalid Section choice\n");
            }
            break;
        case 2:
            printf("Department: Information Technology\n");
            printf("Select Section: 1=Section A, 2=Section B: ");
            scanf("%d", &section);
            switch (section) {
                case 1: printf("Selected: Information Technology - Section A\n"); break;
                case 2: printf("Selected: Information Technology - Section B\n"); break;
                default: printf("Invalid Section choice\n");
            }
            break;
        case 3:
            printf("Department: Artificial Intelligence\n");
            printf("Select Section: 1=Section A, 2=Section B: ");
            scanf("%d", &section);
            switch (section) {
                case 1: printf("Selected: Artificial Intelligence - Section A\n"); break;
                case 2: printf("Selected: Artificial Intelligence - Section B\n"); break;
                default: printf("Invalid Section choice\n");
            }
            break;
        default:
            printf("Invalid Department choice\n");
    }
    return 0;
}
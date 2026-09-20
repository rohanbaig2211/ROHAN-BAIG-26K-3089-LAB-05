#include <stdio.h>

int main() {
    int cnic, test;
    printf("Do you have a CNIC? (1=Yes, 0=No): ");
    scanf("%d", &cnic);

    if (cnic == 1) {
        printf("Have you passed driving test? (1=Yes, 0=No): ");
        scanf("%d", &test);
        if (test == 1) {
            printf("License Can Be Issued\n");
        } else {
            printf("Cannot Issue License: Driving test not passed\n");
        }
    } else {
        printf("Cannot Issue License: CNIC required\n");
    }
    return 0;
}
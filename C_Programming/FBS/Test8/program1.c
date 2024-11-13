#include <stdio.h>
#include <string.h>

void main() {
    char userId[100], pass[100];
    int num;

    printf("Enter user id: ");
    scanf("%s", userId);
    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(userId, "vishal123") == 0 && strcmp(pass, "vishal@123") == 0) {
        printf("Enter the given number (3424): ");
        scanf("%d", &num);
        if (num == 3424) {
            printf("Successfully logged in");
        } else {
            printf("Incorrect number");
        }
    }
    else{
        printf("Incorrect username or password");
    }
}

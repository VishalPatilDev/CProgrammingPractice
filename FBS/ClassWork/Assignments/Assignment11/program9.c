#include <stdio.h>

void main() {
    char str1[100], str2[100]; 
    int length1 = 0, length2 = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[length1] != '\0') {
        length1++;
    }
    if (str1[length1 - 1] == '\n') {
        length1--;
    }
    while (str2[length2] != '\0') {
        length2++;
    }
    if (str2[length2 - 1] == '\n') {
        length2--;
    }

    if (length1 > length2) {
        printf("The larger string is: ");
        for (int i = 0; i < length1; i++) {
            printf("%c", str1[i]);
        }
    } else if (length2 > length1) {
        printf("The larger string is: ");
        for (int i = 0; i < length2; i++) {
            printf("%c", str2[i]);
        }
    } else {
        printf("Both strings are of equal length.\n");
    }
}

#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    char result[50];
    int index = 0;

    for (int i=0; i<str[i];i++) {
        int found = 0;
        for (int j=0;j<index;j++) {
            if (str[i]==result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';
    strcpy(str, result);
}

int main() {
    char name[50] = "programming";
    printf("Original string: %s\n", name);
    removeDuplicates(name);
    printf("String after removing duplicates: %s\n", name);
    return 0;
}

#include <stdio.h>
void removeOddIndexChars(char* str);
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeOddIndexChars(str);
    printf("String after removing characters at odd indices: %s", str);
    return 0;
}
void removeOddIndexChars(char* str) {
    int i = 0, j = 0;
    while (str[i] != '\0'){
        if (i % 2 == 0) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

#include <stdio.h>

int countWords(char* str);
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int wordCount = countWords(str);
    printf("Number of words in the string: %d\n", wordCount);
    return 0;
}
int countWords(char* str) {
    int count = 0;
    int flag = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            flag = 0;
        } else if (!flag) {
            flag = 1;
            count++;
        }
    }
    return count;
}

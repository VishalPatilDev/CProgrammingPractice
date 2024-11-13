#include <stdio.h>
char* my_strrchr(const char* str, int c) {
    char* result = NULL;
    while (*str) {
        if (*str == (char)c) {
            result = (char*)str;
        }
        str++;
    }
    return result;
}
int main() {
    const char* str = "Hello, World!";
    char ch = 'o';
    char* last_occurrence = my_strrchr(str, ch);
    if (last_occurrence) {
        printf("Last occurrence of '%c': %s\n", ch, last_occurrence);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}

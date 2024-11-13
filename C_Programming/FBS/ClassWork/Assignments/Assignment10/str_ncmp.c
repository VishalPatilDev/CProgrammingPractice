#include <stdio.h>
int my_strncmp(const char* s1, const char* s2, size_t n) {
    while (n--) {
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2;
        }
        if (*s1 == '\0') {
            return 0;
        }
        s1++;
        s2++;
    }
    return 0;
}
int main() {
    const char* str1 = "Hello";
    const char* str2 = "HelloWorld";
    int result = my_strncmp(str1, str2, 5);
    if (result == 0) {
        printf("The strings are equal up to the specified length.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }
    return 0;
}

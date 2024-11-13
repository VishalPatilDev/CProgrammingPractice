#include <stdio.h>
#include <ctype.h>
int my_strncasecmp(const char *s1, const char *s2, size_t n) {
    while (n--) {
        char c1 = tolower((unsigned char)*s1++);
        char c2 = tolower((unsigned char)*s2++);
        if (c1 == '\0' && c2 == '\0') {
            return 0;
        }
        if (c1 != c2) {
            return c1 - c2;
        }
    }
    return 0;
}
int main() {
    const char *str1 = "HelloWorld";
    const char *str2 = "helloworld";
    int result = my_strncasecmp(str1, str2, 10);
    if (result == 0) {
        printf("The strings are equal (case-insensitive) up to the specified length.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }
    return 0;
}

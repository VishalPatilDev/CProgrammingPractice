#include <stdio.h>
char* my_strncat(char* dest, const char* src, size_t n) {
    char* ptr = dest;
    while (*ptr) {
        ptr++;
    }
    while (n-- && *src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
int main() {
    char dest[20] = "Hello";
    const char* src = " World";
    my_strncat(dest, src, 6);
    printf("%s\n", dest);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[100];
//     printf("Enter string : ");
//     scanf("%s",str);
//     int res = strchr(str,'a');
//     printf("%s",res);
// }


#include <stdio.h>
char* my_strchr(const char* str, int c) {
    while (*str) {
        if (*str == (char)c) {
            return (char*)str;
        }
        str++;
    }
    return (char*)(*str == (char)c ? str : NULL);
}
int main() {
    const char* str = "Hello, World!";
    char ch = 'o';
    char* first_occurrence = my_strchr(str, ch);
    if (first_occurrence) {
        printf("First occurrence of '%c': %s\n", ch, first_occurrence);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}

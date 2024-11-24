// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str[]="how are you";
//     char* token = strtok(str," ");
//     while(token!='\0'){
//         printf("%s\n",token);
//         token = strtok(NULL," ");
//     }
// }

#include <stdio.h>
char* mystrtok(char* str, char ch);
int main() {
    char str[] = "how are you";
    char* token = mystrtok(str, ' ');
    while (token != NULL) {
        printf("%s\n", token);
        token = mystrtok(NULL, ' ');
    }
    return 0;
}
char* mystrtok(char* str, char ch) {
    static char* currentPos = NULL;
    if (str != NULL) {
        currentPos = str;
    }

    if (currentPos == NULL) {
        return NULL;
    }
    while (*currentPos == ch) {
        currentPos++;
    }
    if (*currentPos == '\0') {
        return NULL;
    }
    char* tokenStart = currentPos;
    while (*currentPos != '\0' && *currentPos != ch) {
        currentPos++;
    }
    if (*currentPos != '\0') {
        *currentPos = '\0';
        currentPos++;
    }
    return tokenStart;
}
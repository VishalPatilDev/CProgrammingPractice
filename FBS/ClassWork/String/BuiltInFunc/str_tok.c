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
    char* token = mystrtok(str, ' '); // Get the first token
    while (token != NULL) {
        printf("%s\n", token); // Print the token
        token = mystrtok(NULL, ' '); // Get the next token
    }
    return 0;
}

char* mystrtok(char* str, char ch) {
    static char* currentPos = NULL; // Keep track of the position
    if (str != NULL) {
        currentPos = str; // Initialize for the first call
    }

    if (currentPos == NULL) {
        return NULL; // No more tokens
    }

    // Skip leading delimiters
    while (*currentPos == ch) {
        currentPos++;
    }

    // If we reached the end of the string
    if (*currentPos == '\0') {
        return NULL;
    }

    // Start of the token
    char* tokenStart = currentPos;

    // Find the end of the token
    while (*currentPos != '\0' && *currentPos != ch) {
        currentPos++;
    }

    // Null-terminate the token
    if (*currentPos != '\0') {
        *currentPos = '\0'; // Replace delimiter with null terminator
        currentPos++; // Move past the null terminator for the next call
    }

    return tokenStart; // Return the token
}
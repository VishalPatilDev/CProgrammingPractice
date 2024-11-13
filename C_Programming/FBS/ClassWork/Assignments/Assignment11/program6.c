#include <stdio.h>
#include <string.h>

void replaceSpaceWithSymbol(char* str);

int main() {
    char str[100]; // Increased the size to 100 characters
    printf("Enter a string: ");
    
    // Read a line of input
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Replace spaces with $
    replaceSpaceWithSymbol(str);

    // Print the modified string
    printf("%s\n", str);

    return 0; // Standard return for main
}

void replaceSpaceWithSymbol(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '$'; // Replace space with $
        }
        i++;
    }
}

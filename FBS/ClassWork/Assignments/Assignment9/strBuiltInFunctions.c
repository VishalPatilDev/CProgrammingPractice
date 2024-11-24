#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
    char str1[100], str2[100], str3[100];
    char *token;
    const char delimiter[] = " ";

    // 1. strcpy
    strcpy(str1, "Hello, World!");
    printf("1. strcpy: %s\n", str1);

    // 2. strlen
    printf("2. strlen: %d\n", strlen(str1));

    // 3. strcat
    strcpy(str2, " Welcome to C programming.");
    strcat(str1, str2);
    printf("3. strcat: %s\n", str1);

    // 4. strcmp
    printf("4. strcmp: %d\n", strcmp(str1, str2));

    // 5. strchr
    char *found = strchr(str1, 'W');
    printf("5. strchr: %s\n", found ? found : "Not found");

    // 6. strrchr
    found = strrchr(str1, 'm');
    printf("6. strrchr: %s\n", found ? found : "Not found");

    // 7. strstr
    found = strstr(str1, "C programming");
    printf("7. strstr: %s\n", found ? found : "Not found");

    // 8. strncat
    strncat(str1, " Let's learn!", 10);
    printf("8. strncat: %s\n", str1);

    // 9. strncmp
    printf("9. strncmp: %d\n", strncmp(str1, str2, 10));

    // 10. strlwr (converting to lowercase)
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }
    printf("10. strlwr: %s\n", str1);

    // 11. strupr (converting to uppercase)
    for (int i = 0; str1[i]; i++) {
        str1[i] = toupper(str1[i]);
    }
    printf("11. strupr: %s\n", str1);

    // 12. strtok
    strcpy(str3, "Tokenize this string");
    token = strtok(str3, delimiter);
    printf("12. strtok: ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, delimiter);
    }
    printf("\n");

    // 13. strrev (not standard, but can be implemented)
    int len = strlen(str1);
    for (int i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    printf("13. strrev (custom): %s\n", str1);

    // 14. strnset (not standard; can use a loop instead)
    for (int i = 0; i < 5 && str1[i]; i++) {
        str1[i] = 'A'; // Custom behavior
    }
    printf("14. strnset: %s\n", str1);

    // 15. strpbrk
    char searchChars[] = "aeiou";
    found = strpbrk(str1, searchChars);
    printf("15. strpbrk: %s\n", found ? found : "Not found");

    // 16. strspn
    printf("16. strspn: %zu\n", strspn(str1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));

    // 17. strcspn
    printf("17. strcspn: %zu\n", strcspn(str1, "aeiou"));

    // 18. strncat (again to show usage)
    strncat(str1, " Test", 5);
    printf("18. strncat again: %s\n", str1);

    // 19. strftime (date formatting)
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    strftime(str1, sizeof(str1), "Current date: %Y-%m-%d", &tm);
    printf("19. strftime: %s\n", str1);

    // 20. strtol (string to long conversion)
    const char *numStr = "12345";
    long num = strtol(numStr, NULL, 10);
    printf("20. strtol: %ld\n", num);

    // 21. sprintf (formatted output to string)
    sprintf(str1, "Formatted number: %ld", num);
    printf("21. sprintf: %s\n", str1);

    return 0;
}

#include <stdio.h>
#include <string.h>

void removeNthCharacter(char *str, int n) {
    for(int i=n;i<strlen(str);i++){
        str[i]=str[i+1];
    }
    str[strlen(str)-1]='\0';

}

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter index of character to remove : ");
    scanf("%d",&n);

    removeNthCharacter(str,n);
    printf("Updated string is : %s",str);
    
    
}

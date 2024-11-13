#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    char ch='%';
    int res;
    

    if (ch == '+') {
        res = num1 + num2;
        printf("Result = %d\n", res);
    }
    else if (ch == '-') {
        res = num1 - num2;
        printf("Result = %d\n", res);
    }
    else if (ch == '/') {
        if (num2 != 0) {
            res = num1 / num2;
            printf("Result = %d\n", res);
        } else {
            printf("Division by zero error\n");
        }
    }
    else if (ch == '*') {
        res = num1 * num2;
        printf("Result = %d\n", res);
    }
    else if (ch == '%') {
        if (num2 != 0) {
            res = num1 % num2;
            printf("Result = %d\n", res);
        } else {
            printf("Division by zero error\n");
        }
    }
    else {
        printf("Wrong Input\n");
    }
    
    return 0;
}

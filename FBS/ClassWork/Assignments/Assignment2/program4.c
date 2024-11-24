#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num == 1) {
        int var;
        scanf("%d", &var);
        if (var % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }
    else if (num == 2) {
        int basicSal;
        scanf("%d", &basicSal);
        float da, ta, hra, sal;
        if (basicSal >= 5000) {
            da = basicSal * 0.1f;
            ta = basicSal * 0.2f;
            hra = basicSal * 0.25f;
        } 
        else {
            da = basicSal * 0.1f;
            ta = basicSal * 0.2f;
            hra = basicSal * 0.25f;
        }
        sal = basicSal + da + ta + hra;
        printf("Salary = %.2f\n", sal);
    }
    return 0;
}

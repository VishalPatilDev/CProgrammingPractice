//Strong Number
#include <stdio.h>
int main(){
    int  num, lastDigit, start, end;
    int fact=1, sum;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Strong numbers between %d to %d are:\n", start, end);
    for(int i=start; i<=end; i++)    {
        num = i;
        sum = 0;
        while(num > 0){
            lastDigit = num % 10;
            for(int j=1; j<=lastDigit; j++){
                fact = fact * j;
            }
            sum += fact;
            num /= 10;
        }
        if(sum == i){
            printf("%d ", i);
        }
    }
    return 0;
}
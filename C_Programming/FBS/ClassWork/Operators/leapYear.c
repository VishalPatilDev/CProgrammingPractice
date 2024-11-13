#include<stdio.h>
void main(){
    int year = 2000;
int res = (year % 4 ==0 && year %100 !=0)||(year%400==0);
printf("%d",res);

}

#include<stdio.h>
void main(){
    int hrs,min,sec;
hrs = 2;
min=24;
sec=2;
int timeInSeconds = (hrs*3600)+(min*60)+sec;
printf("Total time in seconds = %d",timeInSeconds);
}
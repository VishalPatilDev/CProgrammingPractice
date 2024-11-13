#include<stdio.h>
void main(){
    int year = 2000;
    if(year%4==0 && year%100!=0 || year %400==0){
        printf("Given year is leap");
    }
    else{
        printf("Given year is not leap");
    }

}

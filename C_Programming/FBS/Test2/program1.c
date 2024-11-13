#include<stdio.h>
void main(){
    int units,bill;
    printf("Enter electricity units : ");
    scanf("%d",&units);
    if(units>=1 && units<=50){
        bill = 30*units;
        printf("Your bill is : %drs",bill);
    }
    else if(units>=51 && units<=150){
        bill = 40*units;
        printf("Your bill is : %drs",bill);
    }
    else{
        bill = 50*units;
        printf("Your bill is : %drs",bill);
    }

}
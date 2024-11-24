#include<stdio.h>
void main(){
    float basicSal=10000;
    float sal;
    
    int da,ta,hra;
    
    
    
    if(basicSal>=5000){
        da = basicSal*0.1;
        ta = basicSal*0.2;
        hra = basicSal*0.25;
        sal = da+ta+hra;
        printf("Salary = %f",sal);
        
    }
    else{
        da = basicSal*0.15;
        ta = basicSal*0.25;
        hra = basicSal*0.30;
        sal = da+ta+hra;
        printf("%f",sal);
    }

}
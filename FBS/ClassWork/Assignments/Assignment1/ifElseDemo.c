#include<stdio.h>
void main(){
    int ageOfMale = 24;
    int ageOfFemale = 20;

    if(ageOfMale>=21 && ageOfFemale>=18){
        printf("Both are eligible for marry\n");
    }
    else if(ageOfMale<21 || ageOfFemale>=18){
        printf("Female is eligible for marry");
    }
    else if(ageOfMale>=21 || ageOfFemale<18){
        printf("Male is eligible for marry");
    }
    else{
        printf("Both are not eligible for marry");
    }
   
    
}
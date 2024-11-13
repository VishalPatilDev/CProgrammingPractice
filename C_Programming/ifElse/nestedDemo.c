#include<stdio.h>
void main(){
    int marks = 92;
    if(marks>=90 && marks<=100){
        printf("A+");
    }
    else if(marks>=80 && marks<90){
        printf("A");
    }
    else if (marks>=70 && marks<80){
        printf("B");

    }
    else if (marks>=60 && marks<70){
        printf("C");
    }
    else if(marks>=35 && marks<60){
        printf("Pass");
    }
    else if (marks<35){
        printf("Fail");
    }
    else{
        printf("Wrong Input");
    }
}
// #include<stdio.h>  
//                    void main()   
//                    {   
//                    float fahrenheit, celsius;  
//                    celsius = 24;  
//                    fahrenheit =( (celsius*9)/5)+32;  
//                    printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);
//     }  

#include<stdio.h>
void main(){
    float f,c;
    c = 24;
    if(c>=0){
        f = (c*9/5)+32;
        printf("%d is represented in fahrenheit as : %d",c,f);
    }
    else{
        printf("Wrong input");
    }
}

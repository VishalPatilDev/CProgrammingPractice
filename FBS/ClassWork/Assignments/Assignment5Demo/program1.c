//Type1 Function Without any parameters , without any return type
#include<stdio.h>
void num1to10();
void num1to10(){
    int i=1;
    while(i<=10){
        printf("%d",i++);
    }
}
void table(){
    int num,i=1;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("The table of number %d is :\n",num);
    while(i<=10){
        
        printf("%d\n",num*i++);
        
    }
}
void sumOfIntegers(){
    int start,end;
    printf("Enter Starting Number : ");
    scanf("%d",&start);
    printf("Enter Ending Number : ");
    scanf("%d",&end);
    int i=start;
    int sum=0;

    while(i<=end){
        sum = sum+i;
        i++;
    }
    printf("Sum = %d",sum);
}
void primeNum(){
    int num,prime=0;
    printf("Enter any number :");
    scanf("%d",&num);
    int i=2;
    while(i<num){
        if(num%i==0){
            prime++;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("This number is prime");
    }
    else{
        printf("This number is not prime");
    }
}
void armStrong(){
    int num,rem,temp,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num=num/10;
    }
    if(temp == sum){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
}
void perfectNum(){
    int num=6,i=1,sum=0;
    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(num==sum){
        printf("Number is Perfect number");
    }
    else{
        printf("Number is not perfect");
    }
}
void factorialNum(){
    int num,i=1,fact=1;
    printf("Enter a number :");
    scanf("%d",&num);
    while(i<=num){
        fact = fact*i;
        i++;
    }
    printf("The factorial of number is : %d",fact);
}
void strongNum(){
    int num,i=1,fact=1,rem,temp,sum=0;
    temp=num;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        while(i<=num){
        fact = fact*i;
        i++;
    }
    num/=10;
    sum=sum+fact;
    }
    if(temp==sum){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
}
void pallin(){
    int num,temp,rem,rev=0;
    
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem = num%10;
        rev = (rev*10)+rem;
        num/=10;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
void sumOfFirstLast(){
    int num,rem;
    printf("Enter a number :");
    scanf("%d",&num);
    int lastDigit = num%10,firstDigit;
    while(num>=10){
        num/=10;
    }
    firstDigit = num;
    printf("Addition of first and last digit is : %d",firstDigit+lastDigit);
}
void main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num==1){
        num1to10(num);
    }
    else if(num==2){
        table();
    }
    else if(num==3){
        sumOfIntegers();
    }
    else if(num==4){
        primeNum();
    }
    else if(num==5){
        armStrong();
    }
    else if(num==6){
        perfectNum();
    }
    else if (num==7){
        factorialNum();
    }
    else if(num==8){
        strongNum();
    }
    else if (num==9){
        pallin();
    }
    else if (num==10){
        sumOfFirstLast();
    }
    
}
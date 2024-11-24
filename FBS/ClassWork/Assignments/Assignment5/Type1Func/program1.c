#include<stdio.h>
void num1to10();
void num1to10(){
    int i=1;
    while(i<=10){
        printf("%d",i++);
    }
}
void areaOfRect(){
    int l=10,b=20;
    if(l,b>0){
        printf("Area of rectangle is : %d\n",l*b);
        printf("Peremeter of rectangle is : %d",(l+b)*2);

    }
    else{
        printf("Wrong input");
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
    int num,i=1,sum=0;
    printf("Enter Number to check if it is perfect or not");
    scanf("%d",&num);
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

void celToFer(){
    float fahrenheit, celsius;  
    celsius = 24;  
    fahrenheit =( (celsius*9)/5)+32;  
    printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);
    
}
void calculateSal(){
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
        da = basicSal*0.1;
        ta = basicSal*0.2;
        hra = basicSal*0.25;
        sal = da+ta+hra;
        printf("%f",sal);
    }
}
void calDiscount(){
    int priceBeforeDiscount;
    printf("Enter price : ");
    scanf("%d",&priceBeforeDiscount);
    int priceAfterDiscount;
    int discount;
    if(priceBeforeDiscount>=10000){
        // discount = 15/100*100;
        discount=15;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else if(priceBeforeDiscount>=7000 && priceBeforeDiscount<10000){
        discount = 10;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else if(priceBeforeDiscount>=5000 && priceBeforeDiscount<7000){
        discount = 5;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
    else{
        discount= 0;
        priceAfterDiscount=priceBeforeDiscount-(priceBeforeDiscount*discount/100);
        printf("Discount is %d%%\n",discount);
        printf("Price after discount is : %d",priceAfterDiscount);
    }
}
void calSal(){
    int num;
    scanf("%d", &num);
    if (num == 1) {
        int var;
        scanf("%d", &var);
        if (var % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } 
    else if (num == 2) {
        int basicSal;
        scanf("%d", &basicSal);
        float da, ta, hra, sal;
        if (basicSal >= 5000) {
            da = basicSal * 0.1f;
            ta = basicSal * 0.2f;
            hra = basicSal * 0.25f;
        } 
        else {
            da = basicSal * 0.1f;
            ta = basicSal * 0.2f;
            hra = basicSal * 0.25f;
        }
        sal = basicSal + da + ta + hra;
        printf("Salary = %.2f\n", sal);
    }
}
void main(){
    int input;
    printf("Enter Input : ");
    scanf("%d",&input);
    if(input==1){
        num1to10(input);
    }
    else if(input==2){
        table();
    }
    else if(input==3){
        sumOfIntegers();
    }
    else if(input==4){
        primeNum();
    }
    else if(input==5){
        armStrong();
    }
    else if(input==6){
        perfectNum();
    }
    else if (input==7){
        factorialNum();
    }
    else if(input==8){
        strongNum();
    }
    else if (input==9){
        pallin();
    }
    else if (input==10){
        sumOfFirstLast();
    }
    else if(input==11){
        areaOfRect();
    }
    else if(input==12){
        celToFer();
    }
    else if(input==13){
        calculateSal();
    }
    else if(input==14){
        calDiscount();
    }
    else if(input==15){
        calSal();
    }
    
}

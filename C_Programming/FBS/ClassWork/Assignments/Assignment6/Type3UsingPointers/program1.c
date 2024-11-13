
#include<stdio.h>
void swap(int* , int*);
void table(int*);
void primeNum(int*);
void armStrong(int*);
void strongNum(int*);
void palindromeNum(int*);
void perfectNum(int*);
void factNum(int*);
void sumOfFirstAndLast(int*);
void sumOfNums(int*,int*);
void salCal(int*);
void fibonacci(int*);

void main()
{
    int input;
    printf(" 1 for swapping numbers \n 2 for table of given number \n 3 for prime number \n 4 for armstrong number \n 5 for strong number \n 6 for pallindrome number \n 7 for perfect number \n 8 for factorial number \n 9 for sum of first and last digit \n 10 for sum of given range numbers \n 11 for calculating salary \n 12 for fibonacci series \n input = ");
    scanf("%d",&input);
    if(input==1){
        int num1,num2;
        printf("Enter two numbers :");
        scanf("%d %d",&num1,&num2);
        swap(&num1,&num2);
    }
    else if(input==2){
        int num;
        printf("Enter number :");
        scanf("%d",&num);
        table(&num);
    }
    else if(input==3){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        primeNum(&num);
    }
    else if(input ==4){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        armStrong(&num);
    }
    else if (input ==5){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        strongNum(&num);
    }
    else if(input ==6){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        palindromeNum(&num);
    }
    else if(input==7){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        perfectNum(&num);
    }
    else if(input==8){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        factNum(&num);
    }
    else if(input==9){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        sumOfFirstAndLast(&num);
    }
    else if(input==10){
        int sal;
        printf("Enter salary : ");
        scanf("%d",&sal);
        salCal(&sal);
    }
    else if(input==11){
        int start,end;
        printf("Start and end num : ");
        scanf("%d %d",&start,&end);
        sumOfNums(&start,&end);
    }
    else if(input==12){
        int n;
        printf("Enter number :");
        scanf("%d",&n);
        fibonacci(&n);
    }
    else{
        printf("Wrong input");
    }

    
}
void swap(int* num1,int*num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("Swapped numbers : num1 = %d and num2 = %d",*num1,*num2);
}

void table(int *num){
    printf("Table of given number %d is :\n",*num);
    for(int i=1;i<=10;i++){
        printf("%d x %d : %d\n",*num,i,*num*i);
    }

}

void fibonacci(int *num){
    int n1=0,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i=2;i<*num;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    
}
void sumOfNums(int *start,int *end){
    int sum=0;
    for(int i=*start;i<=*end;i++){
        sum=sum+i;
    }
    printf("The sum of given range is : %d",sum);
}
void primeNum(int *n){
    int flag=1;
        for(int i=2;i<=*n/2;i++){
            if(*n%i==0){
                flag=0;
            }
            flag=1;
        }
        if(flag){
            printf("%d is a prime number",n);
        }
        
}
void armStrong(int *n){
    int rem,sum=0;
    for(int i=*n;i!=0;i/=10){
        rem = i%10;
        sum=sum+rem*rem*rem;
    }
    if(sum==*n){
        printf("%d is an armstrong number",*n);
    }
    else{
        printf("%d is not an armstrong number",*n);
    }
}
void strongNum(int *n){
    int rem,fact=1,sum=0;
    for(int i=*n;i!=0;i/=10){
        rem = i%10;
        for(int j=1;j<=rem;j++){
            fact = fact*j;
        }
        sum=sum+fact;
    }
    if(sum==*n){
        printf("%d is a strong number",*n);
    }
    else{
        printf("%d is not a strong number",*n);
    }
}
void palindromeNum(int *n){
    int rem,sum=0,rev=0;
    for(int i=*n;i!=0;i/=10){
        rem = i%10;
        // sum=sum+rem;
        rev = (rev*10)+rem;
    }if(rev==*n){
        printf("%d is a pallindrome number",*n);
    }
    else{
        printf("%d is not a pallindrome number",*n);
    }
}
void perfectNum(int *n){
    int sum=0;
    for(int i=1;i<*n;i++){
        if(*n%i==0){
            sum=sum+i;
        }
    }
    if(sum==*n){
        printf("%d is a perfect number",*n);
    }
    else{
        printf("%d is not a perfect number",*n);
    }
}
void factNum(int *n){
    int fact=1;
    for(int i=1;i<=*n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is : %d",*n,fact);
}
void sumOfFirstAndLast(int *n){
    int lastDigit=*n%10,firstDigit;
    for(int i=*n;i!=0;i/=10){
        firstDigit=i;
    }
    printf("The addition of first and last digit of %d is : %d ",*n,firstDigit+lastDigit);
}
void salCal(int *basicSal){
    float sal;
    int da,ta,hra;
    if(*basicSal>=5000){
        da = *basicSal*0.1f;
        ta = *basicSal*0.2f;
        hra = *basicSal*0.25f;
        sal = da+ta+hra;
        printf("Salary = %.2f",sal);
    }
    else{
        da = *basicSal*0.1f;
        ta = *basicSal*0.2f;
        hra =*basicSal*0.25f;
        sal = da+ta+hra;
        printf("%.2f",sal);
    }
}
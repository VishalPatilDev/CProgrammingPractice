#include<stdio.h>
int isPrime(int);
int strongNum(int);
int perfectNum(int);
int armStrongNum(int n);
void main(){
    int input;
    printf("Enter input : ");
    scanf("%d",&input);
    if(input ==1){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        if(isPrime(num)){
            printf("%d is a prime number ",num);
        }
        else{
            printf("%d is not a prime number",num);
        }
    }
    else if(input==2){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        if(strongNum(num)){
            printf("%d is a strong number",num);
        }
        else{
            printf("%d is not a strong number",num);
        }
    }
    else if(input==3){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        if(perfectNum(num)){
            printf("%d is a Perfect number",num);
        }
        else{
            printf("%d is not a Perfect number",num);
        }
    }
    else if(input==4){
        int num;
        printf("Enter Number :");
        scanf("%d",&num);
        if(armStrongNum(num)){
            printf("%d is a armstrong number",num);
        }
        else{
            printf("%d is not a armstrong number",num);
        }
    }
}
int isPrime(int n){
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return !flag;
        }

    }
    return flag;
}
int strongNum(int n){
    int sum=0,rem;
    for(int i=n;i!=0;i/=10){
        rem=i%10;
        int fact=1;
        for(int j=1;j<=rem;j++){
            fact=fact*j;
        }
        sum=sum+fact;
    }
    return sum==n;
}
int perfectNum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum==n;
}
int armStrongNum(int n){
    int cnt=0,res=1,rem,sum=0;
    for(int i=n;i!=0;i/=10){
        cnt++;
    }
    int count=cnt;
    for(int i=n;i!=0;i/=10){
        rem=i%10;
        for(int j=1;j<=count;j++){
            res=res*rem;
        }
        sum=sum+res;
        res=1;
        count=cnt;
    }
    return sum==n;
}
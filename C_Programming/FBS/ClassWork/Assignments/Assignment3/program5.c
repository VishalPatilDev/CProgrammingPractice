// #include<stdio.h>
// void main(){
//     int num,rem,temp,sum=0;
//     printf("Enter any number :");
//     scanf("%d",&num);
//     temp = num;
//     while(num>0){
//         rem = num%10;
//         sum = sum + (rem*rem*rem);
//         num=num/10;
//     }
//     if(temp == sum){
//         printf("Armstrong Number");
//     }
//     else{
//         printf("Not an Armstrong Number");
//     }
// }



#include<stdio.h>
void main(){
    int num,count=0,rem,res=1,sum=0;
    printf("Enter number :");
    scanf("%d",&num);
    int temp =num;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    int cnt = count;
    temp = num;
    while(temp>0){
        rem = temp%10;
        while(cnt>0){
            res = res*rem;
            cnt--;
        }
        sum=sum+res;
        cnt=count;
        res=1;
        temp/=10;
    }
    if(sum==num){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not armstrong number",num);
    }
}
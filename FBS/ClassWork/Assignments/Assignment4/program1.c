#include <stdio.h>

int main() {
    int sn, en, n, count, rem, mul, result;
    printf("Enter Start and End: ");
    scanf("%d %d", &sn, &en);
    for (int i = sn; i <= en; i++) {
        n = i;
        count = 0;
        result = 0;
        while (n != 0) {
            n = n / 10;
            count++;
        }
        n = i;
        while (n != 0) {
            rem = n % 10;
            mul = 1;
            for (int j = 0; j < count; j++) {
                mul *= rem;
            }

            result += mul;
            n = n / 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}




// #include<stdio.h>
// void main(){
//     int sn,en;
//     printf("Enter range : ");
//     scanf("%d %d",&sn,&en);
//     for(int i=sn;i<=en;i++){
//         int sum = 0;
//         for(int num=i;num>0;num/=10){
//             int rem = num%10;
//             sum = sum+rem*rem*rem;
//         }
//         if(sum==i){
//             printf("Armstrong Number between %d & %d :%d\n",sn,en,i);
//         }
//     }
// }

// #include<stdio.h>
// void main(){
//     int sn,en,n,count=0,cnt,rem,mul=1,result;
//     printf("Enter Start and End :");
//     scanf("%d %d",&sn,&en);
//     for(int i=sn;i<=en;i++){
//         n=i;
//         while(n!=0){
//             n=n/10;
//             count++;
//         }
//         cnt=count;
//         n=i;
//         result=0;
//         while(n!=0){
//             rem = n%10;
//             while(cnt!=0){
//                 mul=mul*rem;
//                 cnt--;
//             }
//             result = result+mul;
//             cnt = count;
//             n=n/10;
//             mul=1;
//         }
//         if(result==i){
//             printf("%d ",i);
//         }
        
//     }
// }
#include<stdio.h>
int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void main(){
    int n1,n2;
    printf("Enter range :");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}
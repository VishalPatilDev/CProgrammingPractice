//Fibonacci Series//
#include<stdio.h>
void main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int n1=0,n2=1,n3;
    printf("%d %d ",n1,n2);
    for(int i=2;i<n;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}
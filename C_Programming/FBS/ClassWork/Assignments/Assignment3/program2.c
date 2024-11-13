#include<stdio.h>
void main(){
    int num,i=1;
    scanf("%d",&num);
    printf("The table of number %d is :\n",num);
    while(i<=10){
        printf("%d\n",num*i++);
    }
}
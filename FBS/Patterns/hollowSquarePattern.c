// * * * * *   |   1 2 3 4 5   |   A B C D E
// *       *   |   1       5   |   A       E
// *       *   |   1       5   |   A       E
// *       *   |   1       5   |   A       E
// * * * * *   |   1 2 3 4 5   |   A B C D E

#include<stdio.h>
void main(){
    int rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        if(i==1 || i==rows){
            for(int j=1;j<=rows;j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            printf("* ");
        for(int space=1;space<=rows+1;space++){
            printf(" ");
        }
        printf("* ");
        printf("\n");
        }
        
    }
}
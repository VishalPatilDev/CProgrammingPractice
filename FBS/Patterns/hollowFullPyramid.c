//         *           |           1           |           A
//       *   *         |         1   3         |         A   C
//     *       *       |       1       5       |       A       E
//   *           *     |     1           7     |     A           G
// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I

#include<stdio.h>
void main(){
    int rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        if(i==1){
            printf("*");
            printf("\n");
        }
        else if(i==rows){
            for(int j=1;j<=2*i-1;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int space=1;space<= 2 * (i - 1) - 1;space++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
}
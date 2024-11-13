// * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
//   *           *     |     1           7     |     A           G
//     *       *       |       1       5       |       A       E
//       *   *         |         1   3         |         A   C
//         *           |           1           |           A

#include<stdio.h>
void main(){
    int rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        if(i==rows){
            for(int j=1;j<=2*i-1;j++){
                printf("*");
            }
            printf("\n");
        }
        else if(i==1){
            printf("*");
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

//     * * * * *   |       1 2 3 4 5   |       A B C D E
//    * * * * *    |      1 2 3 4 5    |      A B C D E
//   * * * * *     |     1 2 3 4 5     |     A B C D E
//  * * * * *      |    1 2 3 4 5      |    A B C D E
// * * * * *       |   1 2 3 4 5       |   A B C D E

// #include<stdio.h>
// void main(){
//     int rows;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int space=1;space<=rows-i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=rows;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main(){
//     int rows;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int space=1;space<=rows-i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=rows;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
void main(){
    int rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=rows;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
}
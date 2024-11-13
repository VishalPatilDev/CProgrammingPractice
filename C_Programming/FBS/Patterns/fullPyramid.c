//          *           |           1           |           A
//        * * *         |         1 2 3         |         A B C
//      * * * * *       |       1 2 3 4 5       |       A B C D E
//    * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
//  * * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int space=1;space<=rows-i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(int i=1;i<=rows;i++){
//         for(int space=1;space<=rows-i;space++){
//             printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}
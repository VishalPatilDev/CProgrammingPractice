// * * * * *   |   1 2 3 4 5   |   A B C D E
// * * * *     |   1 2 3 4     |   A B C D
// * * *       |   1 2 3       |   A B C
// * *         |   1 2         |   A B
// *           |   1           |   A

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter number of rows : ");
//     scanf("%d",&rows);
//     for(int i=rows;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("* ");
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
//     for(int i=rows;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
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
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}
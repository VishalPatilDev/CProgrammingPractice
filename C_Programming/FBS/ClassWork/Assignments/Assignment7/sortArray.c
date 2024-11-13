// #include<stdio.h>
// void main(){
//     int arr[100],size;
//     int temp=arr[0];
//     printf("Enter size of array  :");
//     scanf("%d",&size);
//     printf("Enter elements : ");
//     for(int i = 0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>arr[i+1]){
//             temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//         printf("%d ",arr[i]);
//     }

// }
#include<stdio.h>
void main(){
    int arr[100],size;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    printf("Sorted array is : ");
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d ",arr[i]);
    }

}
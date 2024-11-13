// #include<stdio.h>
// void evenOdd(int*,int);
// void merge(int*,int*,int,int);
// void sumAvg(int*,int);
// void minMax(int*,int);
// void primeNums(int*,int);
// void search(int*,int);
// void sumOfTwoArrays(int*,int*,int,int);
// void sort(int*,int);
// void main(){
    
    
//     while(1){
//         // printf("Do you want to play the array game press 1 if yes press 0 to exit : ");
//         int input;
//         printf("Enter input : ");
//         scanf("%d",&input);
//         if(input==1){
//             int arr[100];
//             int size;
//             printf("Enter size of array : ");
//             scanf("%d",&size);
//             printf("Enter elements of array : ");
//             for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//             }
//             sumAvg(arr,size);
//         }
//         else if(input==2){
//             int arr[100];
    
//     int size;
//     printf("Enter size of array : ");
//     scanf("%d",&size);
//     printf("Enter elements of array : ");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//             evenOdd(arr,size);
//         }
//         else if(input==3){
//             int arr1[100],arr2[100],size1,size2;
//     printf("Enter size of first array : ");
//     scanf("%d",&size1);
//     printf("Enter elements of first array : ");
//     for(int i = 0;i<size1;i++){
//         scanf("%d",&arr1[i]);
//     }
//     printf("Enter size of second array : ");
//     scanf("%d",&size2);
//     printf("Enter elements of second array : ");
//     for(int i = 0;i<size2;i++){
//         scanf("%d",&arr2[i]);
//     }
//     merge(arr1,arr2,size1,size2);
//         }
//         else if(input==4){
//             int arr[100];
//             int size;
//             printf("Enter size of array : ");
//             scanf("%d",&size);
//             printf("Enter elements of array : ");
//             for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//             }
//             minMax(arr,size);
//         }
//         else if(input ==5){
//             int arr[100];
//             int size;
//             printf("Enter size of array : ");
//             scanf("%d",&size);
//             printf("Enter elements of array : ");
//             for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//             }
//             primeNums(arr,size);
//         }
//         else if(input==6){
//             int arr[100];
//             int size;
//             printf("Enter size of array : ");
//             scanf("%d",&size);
//             printf("Enter elements of array : ");
//             for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//             }
//             search(arr,size);
//         }
//         else if(input==7){
//             int arr[100];
//             int size;
//             printf("Enter size of array : ");
//             scanf("%d",&size);
//             printf("Enter elements of array : ");
//             for(int i=0;i<size;i++){
//                 scanf("%d",&arr[i]);
//             }
//             sort(arr,size);
//         }
//         else if(input==8){
//             int arr1[100],size1,size2,arr2[100];
//     printf("Enter size1 of array : ");
//     scanf("%d",&size1);
//     printf("Enter elements in array : ");
//     for(int i=0;i<size1;i++){
//         scanf("%d",&arr1[i]);
//     }
//     printf("Enter size2 of array : ");
//     scanf("%d",&size2);
//     printf("Enter elements in array : ");
//     for(int i=0;i<size2;i++){
//         scanf("%d",&arr2[i]);
//     }
//     sumOfTwoArrays(arr1,arr2,size1,size2);

//         }
//         else if(input==0){
//             break;
//         }
//     }
// }
// void sumOfTwoArrays(int* arr1,int* arr2,int size1,int size2){
//     int sum1=0;
    
//     for(int i=0;i<size1;i++){
        
//         sum1=sum1+arr1[i];
//     }

//     int sum2=0;
    
//     for(int i=0;i<size2;i++){
//         sum2=sum2+arr2[i];
//     }
//     printf("Sum of two given array elements = %d",sum1+sum2);
// }
// void sort(int *arr,int size){
//     int temp=arr[0];
//     printf("Sorted array is : ");
//     for(int i=0;i<size;i++){
//         for(int j =i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         printf("%d ",arr[i]);
//     }
// }

// void merge(int* arr1,int* arr2,int size1,int size2){
//     int size3,arr3[100];
//     size3=size1+size2;
//     for(int i=0;i<size1;i++){
//         arr3[i]=arr1[i];
//     }
//     for(int i=0;i<size2;i++){
//         arr3[i+size1]=arr2[i];
//     }
//     printf("The merged array is : ");
//     for(int i=0;i<size3;i++){
//         printf("%d ",arr3[i]);
//     }
// }
// void evenOdd(int* arr,int size){
    
//     printf("Even nos in array is : ");
//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0){
//             printf("%d\t",arr[i]);
//         }
//     }
//     printf("Odd nos in array is : ");
//     for(int i=0;i<size;i++){
//         if(arr[i]%2!=0){
//             printf("%d\t",arr[i]);
//         }
//     }
// }
// void minMax(int* arr,int size){
//     int min=arr[0];
//     int max=arr[0];
//     for(int i=0;i<size;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("Minimum value in given array is : %d\n",min);
//     printf("Maximum value in given array is : %d\n",max);
// }
// void search(int* arr,int size){
//     int num;
//     printf("Enter number you want to search in given array : ");
//     scanf("%d",&num);
    
//     for(int i=0;i<10;i++){
//         if(num==arr[i]){
//             printf("Number found at index : %d\n",i+1);
//             break;
//         }
//     }
// }
// void primeNums(int* arr,int size){
//     int prime;
//     for(int i =0;i<size;i++){
//         prime=1;
//         for(int j=2;j<arr[i]/2;j++){
//             if(arr[i]%j==0){
//                 prime=0;
//                 break;
//             }
//         }
//         if(prime==1){
//             printf("Prime numbers in given array = %d ",arr[i]);
//         }

//     }
// }


// void sumAvg(int* arr,int size){
//     int sum=0,avg;
    
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         avg = sum/size;
//     }
//     printf("Sum of array : %d\n",sum);
//     printf("Average of given elements in array is : %d\n",avg);
// }


#include<stdio.h>
void evenOdd(int*,int);
void merge(int*,int*,int,int);
void sumAvg(int*,int);
void minMax(int*,int);
void primeNums(int*,int);
void search(int*,int);
void sumOfTwoArrays(int*,int*,int,int);
void sort(int*,int);
void main(){
    
    
    while(1){
        // printf("Do you want to play the array game press 1 if yes press 0 to exit : ");
        int input;
        printf("Enter input : ");
        scanf("%d",&input);
        if(input==1){
            int arr[100];
            int size;
            printf("Enter size of array : ");
            scanf("%d",&size);
            printf("Enter elements of array : ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            sumAvg(arr,size);
        }
        else if(input==2){
            int arr[100];
    
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
            evenOdd(arr,size);
        }
        else if(input==3){
            int arr1[100],arr2[100],size1,size2;
    printf("Enter size of first array : ");
    scanf("%d",&size1);
    printf("Enter elements of first array : ");
    for(int i = 0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array : ");
    scanf("%d",&size2);
    printf("Enter elements of second array : ");
    for(int i = 0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,size1,size2);
        }
        else if(input==4){
            int arr[100];
            int size;
            printf("Enter size of array : ");
            scanf("%d",&size);
            printf("Enter elements of array : ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            minMax(arr,size);
        }
        else if(input ==5){
            int arr[100];
            int size;
            printf("Enter size of array : ");
            scanf("%d",&size);
            printf("Enter elements of array : ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            primeNums(arr,size);
        }
        else if(input==6){
            int arr[100];
            int size;
            printf("Enter size of array : ");
            scanf("%d",&size);
            printf("Enter elements of array : ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            search(arr,size);
        }
        else if(input==7){
            int arr[100];
            int size;
            printf("Enter size of array : ");
            scanf("%d",&size);
            printf("Enter elements of array : ");
            for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
            }
            sort(arr,size);
        }
        else if(input==8){
            int arr1[100],size1,size2,arr2[100];
    printf("Enter size1 of array : ");
    scanf("%d",&size1);
    printf("Enter elements in array : ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size2 of array : ");
    scanf("%d",&size2);
    printf("Enter elements in array : ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    sumOfTwoArrays(arr1,arr2,size1,size2);

        }
        else if(input==0){
            break;
        }
    }
}
void sumOfTwoArrays(int* arr1,int* arr2,int size1,int size2){
    int sum1=0;
    
    for(int i=0;i<size1;i++){
        
        sum1=sum1+arr1[i];
    }

    int sum2=0;
    
    for(int i=0;i<size2;i++){
        sum2=sum2+arr2[i];
    }
    printf("Sum of two given array elements = %d",sum1+sum2);
}
void sort(int *arr,int size){
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

void merge(int* arr1,int* arr2,int size1,int size2){
    int size3,arr3[100];
    size3=size1+size2;
    for(int i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        arr3[i+size1]=arr2[i];
    }
    printf("The merged array is : ");
    for(int i=0;i<size3;i++){
        printf("%d ",arr3[i]);
    }
}
void evenOdd(int* arr,int size){
    
    printf("Even nos in array is : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d\t",arr[i]);
        }
    }
    printf("Odd nos in array is : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d\t",arr[i]);
        }
    }
}
void minMax(int* arr,int size){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Minimum value in given array is : %d\n",min);
    printf("Maximum value in given array is : %d\n",max);
}
void search(int* arr,int size){
    int num;
    printf("Enter number you want to search in given array : ");
    scanf("%d",&num);
    
    for(int i=0;i<10;i++){
        if(num==arr[i]){
            printf("Number found at index : %d\n",i+1);
            break;
        }
    }
}
void primeNums(int* arr,int size){
    int prime;
    for(int i =0;i<size;i++){
        prime=1;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("Prime numbers in given array = %d ",arr[i]);
        }
    }
}


void sumAvg(int* arr,int size){
    int sum=0,avg;
    
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        avg = sum/size;
    }
    printf("Sum of array : %d\n",sum);
    printf("Average of given elements in array is : %d\n",avg);
}
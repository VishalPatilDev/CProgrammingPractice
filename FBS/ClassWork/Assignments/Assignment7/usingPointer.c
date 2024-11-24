#include<stdio.h>
void store(int*,int);
void display(int*,int);
void sort(int*,int);
void primeNums(int*,int);
void sumOfEle(int*,int);
void minMax(int*,int);
void search(int*,int);
void evenOdd(int*,int);
void alternateEle(int*,int);
void reverse(int*,int);
void main(){
    int arr[100],arr1[10]={10,20,30,55,42,65,23,457,235,77};
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements in array : ");
    store(arr,size);
    printf("Displaying array elements : ");
    display(arr,size);
    printf("\nSorting given array elements :");
    sort(arr,size);
    printf("\nPrime numbers in given array : ");
    primeNums(arr,size);
    printf("\nSum of numbers in given array : ");
    sumOfEle(arr,size);
    minMax(arr,size);
    search(arr1,size);
    evenOdd(arr,size);
    reverse(arr,size);
}
void reverse(int* arr,int size){
    printf("Reversed array is : ");
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
void alternateEle(int* arr,int size){
    printf("Printing alternate elements in array : ");
    for(int i=0;i<size;i=i+2){
        printf("%d ",arr[i]);
    }
}
void evenOdd(int* arr,int size){
    printf("Even nos in array : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd nos in array : ");
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d \n",arr[i]);
        }
    }
}
void search(int* arr,int size){
    int num;
    printf("\nEnter the element you want to search : ");
    scanf("%d",&num);
    int found=0;
    int i;
    for(i=0;i<=size;i++){
        if(num==arr[i]){
            found=1;
            break;
        }
    }
    if(found){
        printf("Element found at index : %d\n",i);
    }
    else{
        printf("Element not found");
    }
}
void store(int* ptr,int size){
    for(int i =0;i<size;i++){
        scanf("%d",&ptr[i]);
    }

}
void display(int* ptr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }
    
}
void sort (int* ptr,int size){
    int temp=ptr[0];
    // printf("Sorted array is : ");
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(ptr[i]>ptr[j]){
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
        printf("%d ",ptr[i]);
    }
}
void primeNums(int* arr,int size){
    for(int i =0;i<size;i++){
        int prime=1;
        for(int j=2;j<arr[i]/2;j++){
            if(arr[i]%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d ",arr[i]);
        }
        else{
            printf("No prime numbers");
        }

    }
}
void sumOfEle(int* arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
void minMax(int *arr,int size){
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
    printf("\nMinimum value in given array is : %d\n",min);
    printf("Maximum value in given array is : %d",max);
}
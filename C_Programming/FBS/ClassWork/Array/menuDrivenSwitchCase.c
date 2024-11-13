    #include <stdio.h>

    void evenOdd(int*, int);
    void merge(int*, int*, int, int);
    void sumAvg(int*, int);
    void minMax(int*, int);
    void primeNums(int*, int);
    void search(int*, int);
    void sumOfTwoArrays(int*, int*, int, int);
    void sort(int*, int);

    void main() {
        int input;

        do {
            printf("Enter input (1-8 for operations, 0 to exit): ");
            scanf("%d", &input);

            switch (input) {
                case 1: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    sumAvg(arr, size);
                    break;
                }
                case 2: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    evenOdd(arr, size);
                    break;
                }
                case 3: {
                    int arr1[100], arr2[100], size1, size2;
                    printf("Enter size of first array: ");
                    scanf("%d", &size1);
                    printf("Enter elements of first array: ");
                    for (int i = 0; i < size1; i++) {
                        scanf("%d", &arr1[i]);
                    }
                    printf("Enter size of second array: ");
                    scanf("%d", &size2);
                    printf("Enter elements of second array: ");
                    for (int i = 0; i < size2; i++) {
                        scanf("%d", &arr2[i]);
                    }
                    merge(arr1, arr2, size1, size2);
                    break;
                }
                case 4: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    minMax(arr, size);
                    break;
                }
                case 5: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    primeNums(arr, size);
                    break;
                }
                case 6: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    search(arr, size);
                    break;
                }
                case 7: {
                    int arr[100], size;
                    printf("Enter size of array: ");
                    scanf("%d", &size);
                    printf("Enter elements of array: ");
                    for (int i = 0; i < size; i++) {
                        scanf("%d", &arr[i]);
                    }
                    sort(arr, size);
                    break;
                }
                case 8: {
                    int arr1[100], arr2[100], size1, size2;
                    printf("Enter size1 of array: ");
                    scanf("%d", &size1);
                    printf("Enter elements in first array: ");
                    for (int i = 0; i < size1; i++) {
                        scanf("%d", &arr1[i]);
                    }
                    printf("Enter size2 of array: ");
                    scanf("%d", &size2);
                    printf("Enter elements in second array: ");
                    for (int i = 0; i < size2; i++) {
                        scanf("%d", &arr2[i]);
                    }
                    sumOfTwoArrays(arr1, arr2, size1, size2);
                    break;
                }
                case 0:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid input! Please enter a number between 0 and 8.\n");
            }
        } while (input != 0);
    }

    void sumOfTwoArrays(int* arr1, int* arr2, int size1, int size2) {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < size1; i++) {
            sum1 += arr1[i];
        }

        for (int i = 0; i < size2; i++) {
            sum2 += arr2[i];
        }
        printf("Sum of two given array elements = %d\n", sum1 + sum2);
    }

    void sort(int* arr, int size) {
        int temp;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("Sorted array is: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    void merge(int* arr1, int* arr2, int size1, int size2) {
        int size3 = size1 + size2;
        int arr3[100];

        for (int i = 0; i < size1; i++) {
            arr3[i] = arr1[i];
        }
        for (int i = 0; i < size2; i++) {
            arr3[i + size1] = arr2[i];
        }
        
        printf("The merged array is: ");
        for (int i = 0; i < size3; i++) {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    void evenOdd(int* arr, int size) {
        printf("Even numbers in array: ");
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                printf("%d\t", arr[i]);
            }
        }
        printf("\nOdd numbers in array: ");
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {
                printf("%d\t", arr[i]);
            }
        }
        printf("\n");
    }

    void minMax(int* arr, int size) {
        int min = arr[0], max = arr[0];
        for (int i = 1; i < size; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        printf("Minimum value in given array is: %d\n", min);
        printf("Maximum value in given array is: %d\n", max);
    }

    void search(int* arr, int size) {
        int num;
        printf("Enter number you want to search in given array: ");
        scanf("%d", &num);

        for (int i = 0; i < size; i++) {
            if (num == arr[i]) {
                printf("Number found at index: %d\n", i);
                return;
            }
        }
        printf("Number not found.\n");
    }

    void primeNums(int* arr, int size) {
        printf("Prime numbers in given array: ");
        for (int i = 0; i < size; i++) {
            if (arr[i] < 2) continue; // 0 and 1 are not prime
            int prime = 1;
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime) {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }

    void sumAvg(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        printf("Sum of array: %d\n", sum);
        printf("Average of given elements in array is: %.2f\n", (float)sum / size);
    }

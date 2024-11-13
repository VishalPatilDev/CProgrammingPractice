void main() {
int i, n;
printf("Enter the number of integers: ");
scanf("%d", &n);
int *ptr = (int *)malloc(n* sizeof(int));
// if(ptr == '\0') {
// printf("Memory not available.");
// exit(1);
// }
store(ptr,n);
display(ptr,n);
}

void store(char* ptr,int n){
    for(int i=0; i<n; i++) {
printf("Enter an integer: ");
scanf("%d", &ptr[i]);
}
}
void display(char* ptr,int n){
    for(int i=0; i<n; i++)
        printf("%d ", ptr[i]);
}

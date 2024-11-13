// #include<stdio.h>
// void main()
// {
//     int a =5;
//     if(a=0){
//         printf("hello");
//     }
//     else{
//         printf("bye");
//     }
// }

// #include<stdio.h>
// void main(){
//     int a = 67;
//     printf("%c",a);
//     printf("a"+"b"); //error
// }

// #include<stdio.h>
// void main(){
//     char ch = -122;
//     printf("%c",ch);
// }

// #include <stdio.h>  
// int main()  
// {  
//     // declare a variable  
//     int asciTable;  
//     printf (" The complete ASCII table of the characters in the C ");  
//     for (asciTable = 0; asciTable < 255; asciTable++)  
//     {  
//         printf (" \n The value of '%c' character is: %d", asciTable, asciTable);  
          
//     }  
//     return 0;  
// }  


// Constants in C
// #include<stdio.h>
// #define GREATER(x,y) if(x>y) \
// printf("%d is greater",x); \
// else \
// printf("%d is lesser",x);

// void main(){
//     // int x = 10,y=20;
//     GREATER(20,10);
// }

// #include<stdio.h>
// #define add(x,y) x+y
// void main(){
//     printf("%d",add(4,3));
// }





// #include<stdio.h>
// void main1();
// void main(){
//     printf("Hello");
//     main1();
// }
// void main1(){
//     int main;
//     for(main=1;main<=5;main++){
//         printf("%d",main);
//     }
//     printf("Outside main loop : value of main is %d",main);
// }


// #include<stdio.h>
// int sum();
// int main(){
//     int c = sum();
//     printf("%d",c);
//     return 0;
// }
// int sum(){
//     int a=10,b=10;
//     int c = a+b;
// }


// #include<stdio.h>
// int power(int,int);
// void main(){
//     int num;
//     printf("Enter number : ");
//     scanf("%d",&num);
//     int count;
//     printf("Enter count :");
//     scanf("%d",&count);
//     printf("%d^%d = %d",num,count,power(num,count));
// }
// int power(int num,int count){
//     int power=1;
//     for(int j=1;j<=count;j++){
//             power=power*num;
//         }
//         return power;
// }
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d",&n);
//     int n1=0,n2=1,n3;
//     printf("%d %d ",n1,n2);
//     for(int i=2;i<n;i++){
//         n3=n1+n2;
//         printf("%d ",n3);
//         n1=n2;
//         n2=n3;
//     }

// }


// #include<stdio.h>
// void main(){
//     int num;
//     printf("Enter num : ");
//     scanf("%d",&num);
//     int res = isPowTwo(num);
//     if(res==1){
//         printf("The number is power of 2");
//     }
//     else{
//         printf("The number is not power of two");
//     }
// }
// int isPowTwo(int num){
//     int i=0;
//     while(i!=1){
//         if(num%2!=0){
//             return 0;
//         }
//         num=num/2;
//         i++;
//     }
//     return 1;
// }


// #include<stdio.h>
// #include<string.h>

// void main(){
//     char str[100]="I love cricket";
//     int i=0,res=0,count=0;
    
//     while(str[i]!=NULL){
//         if(str[i] != ' '){
//             count++;
//         }
//         else{
//             if(res<count){
//                 res=count;
//             }
//             count=0;
//         }
//         i++;
//     }
//     if(res<count){
//         res=count;
//     }
//     printf("%d",res);
// }


// #include<stdio.h>
// void main(){
//     char str[10];
//     // scanf("%[^\n]s",str);  // Reads a string until \n , by default it reads upto a space 
//     //scanf can read no of characters more than the given size
//     // scanf("%9s",str);
//     fgets(str,sizeof(str),stdin);
//     printf("%s",str);
// }

// #pragma pack(1)
// #include<stdio.h>
// struct abc {
//     char a;
//     double c;
//     char b;
    
// }v;
// void main(){
//     printf("%d",sizeof(v));
// }


// #include <stdio.h>

// int main() {
//     int num = 527, sum, rem;

//     // Loop to calculate the sum of digits until it's a single digit
//     do {
//         sum = 0; // Reset sum for each iteration
//         for (int i = num; i != 0; i /= 10) {
//             rem = i % 10; // Get the last digit
//             sum += rem;   // Add the last digit to sum
//         }
//         num = sum; // Update num to the sum of digits
//     } while (sum >= 10); // Continue until the sum is a single digit

//     printf("Final single-digit sum: %d\n", sum);
//     return 0;
// }







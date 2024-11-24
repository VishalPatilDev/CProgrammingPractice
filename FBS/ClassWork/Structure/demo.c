#include<stdio.h>
#include<string.h>

// struct Player{
//     char name[50];
//     int age;
//     int jerNo;
//     char teamName[50];
// }p1,p2;
// void main(){
//     strcpy(p1.name,"vishal");
//     printf("%s\n",p1.name);
//     printf("%d",sizeof(p2));
    
// }
struct abc{
    int a;
    int b;
    char c[10];
    char *ch[100];

};
void main(){
    struct abc abc;
    printf("%d\n",sizeof(abc));
    char* ptr=(char*)malloc(100*sizeof(char));
    ptr[0]='a';
    ptr[1]='b';
    int i=0;
    while(ptr[i]!='\0'){
        printf("%c\n",ptr[i]);
        i++;
    }
}

/*
The layout in memory would likely look like this:
a: 4 bytes (0-3)
b: 4 bytes (4-7)
c: 10 bytes (8-17)
Padding: 3 bytes (to make the total size a multiple of 4,
since the structure itself often gets aligned to the size of its largest member,
which is 4 bytes)
Therefore, the total size is:
4 (a) + 4 (b) + 10 (c) + 2 (padding) = 20 bytes
*/

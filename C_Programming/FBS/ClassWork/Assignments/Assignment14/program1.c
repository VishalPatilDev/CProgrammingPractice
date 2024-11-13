#include<stdio.h>
typedef struct Book{
    char bookName[50];
    int id;
    char authorName[50];
    float price;
}Book;

void main(){
    Book b1;
    store(&b1);
    display(&b1);
}

void store(Book* b1){
    fgets(b1->bookName,sizeof(b1->bookName),stdin);
    scanf("%d",&b1->id);
    getchar();
    fgets(b1->authorName,sizeof(b1->authorName),stdin);
    scanf("%f",&b1->price);
}

void display(Book *b1)
{
    printf("Book name : %s",b1->bookName);
    printf("Id of book : %d\n",b1->id);
    printf("Author of the book : %s",b1->authorName);
    printf("price of book : %.2f",b1->price);
}

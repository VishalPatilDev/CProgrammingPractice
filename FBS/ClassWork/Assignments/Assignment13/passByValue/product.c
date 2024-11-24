#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Product{
    int id;
    char name[50];
    int quantity;
    float price;
}Product;


Product store();
void display(Product);
void store2(Product* p2,int size);
void display2(Product* p2,int size);
void main(){
    Product p1,p2[10];
    p1=store();
    display(p1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(p2,size);
    display2(p2,size);

}
Product store(){
    Product temp;
    printf("Enter roll number of Product : ");
    scanf("%d",&temp.id);
    getchar();
    printf("Enter name of Product : ");
    fgets(temp.name,sizeof(temp.name),stdin);
    // scanf("%s",temp.name);
    printf("Enter quantity of Product : ");
    scanf("%d",&temp.quantity);
    printf("Enter price of Product : ");
    scanf("%f",&temp.price);
    return temp;
}
void store2(Product* p2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Product id : ");
        scanf("%d",&p2[i].id);
        printf("Enter Product name : ");
        scanf("%s",p2[i].name);
        printf("Enter Product quantity : ");
        scanf("%d",&p2[i].quantity);
        printf("Enter price of Product : ");
        scanf("%f",&p2[i].price);
    }
    
}
void display(Product p1){
    printf("Roll number of Product : %d\n",p1.id);
    printf("Name of Product : %s\n",p1.name);
    printf("quantity of Product : %d\n",p1.quantity);
    printf("price of product = %f\n",p1.price);
}
void display2(Product* p2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",p2[i].id);
        printf("Name = %s\n",p2[i].name);
        printf("quantity = %d\n",p2[i].quantity);
        printf("price = %f\n",p2[i].price);
    }
}



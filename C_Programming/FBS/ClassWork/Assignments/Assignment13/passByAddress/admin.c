#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Admin{
    int id;
    char name[50];
    float salary;
    float allowance;
}Admin;

Admin store();
void display(Admin);
void store2(Admin* a2,int size);
void display2(Admin* a2,int size);

void main(){
    Admin a1,a2[10];
    a1=store();
    display(a1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(a2,size);
    display2(a2,size);

}
Admin store(){
    Admin temp;
    printf("Enter roll number of Admin : ");
    scanf("%d",&temp.id);
    getchar();
    printf("Enter name of Admin : ");
    fgets(temp.name,sizeof(temp.name),stdin);
    // scanf("%s",temp.name);
    printf("Enter salary of Admin : ");
    scanf("%f",&temp.salary);
    return temp;
}
void store2(Admin* a2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Admin id : ");
        scanf("%d",&a2[i].id);
        printf("Enter Admin name : ");
        scanf("%s",a2[i].name);
        printf("Enter Admin salary : ");
        scanf("%f",&a2[i].salary);
        printf("Enter allowance : ");
        scanf("%f",&a2[i].allowance);
    }
}
void display(Admin a1){
    printf("Roll number of Admin : %d\n",a1.id);
    printf("Name of Admin : %s\n",a1.name);
    printf("salary of Admin : %f\n",a1.salary);
    printf("Allowance of Admin = %f\n",a1.allowance);
}
void display2(Admin* a2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",a2[i].id);
        printf("Name = %s\n",a2[i].name);
        printf("salary = %f\n",a2[i].salary);
        printf("Allowance = %f\n",a2[i].allowance);
    }
}



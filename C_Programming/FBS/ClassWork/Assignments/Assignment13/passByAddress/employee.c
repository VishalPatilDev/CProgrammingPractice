#include<stdio.h>
#include<string.h>
typedef struct Employee {
    int id;
    char name[50];
    float salary;
}Employee;
void store(Employee*,int);
void display(Employee*,int);
void main(){
    Employee e1[5];
    int size;
    printf("Enter size of emp struct : ");
    scanf("%d",&size);
    store(e1,size);
    display(e1,size);
}
void store(Employee* e1,int size){
    printf("Enter elements : id,name,salary\n");
    for(int i=0;i<size;i++){
        printf("Enter id :");
        scanf("%d",&e1[i].id);
        getchar();
        printf("Enter name : ");
        fgets(e1[i].name,sizeof(e1[i].name),stdin);
        printf("Enter salary : ");
        scanf("%f",&e1[i].salary);
    }
}
void display(Employee* e1,int size){
    for(int i=0;i<size;i++){
        printf("Eployee id = %d\n",e1[i].id);
        printf("Employee name = %s\n",e1[i].name);
        printf("Employee salary = %f\n",e1[i].salary);
    }
}
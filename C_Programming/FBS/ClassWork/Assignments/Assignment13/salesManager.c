#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct SalesManager{
    int id;
    char name[50];
    float salary;
    float insentive;
    int target;
}SalesManager;

SalesManager store();
void display(SalesManager);
void store2(SalesManager* SalesManager2,int size);
void display2(SalesManager* SalesManager2,int size);
void main(){
    SalesManager SalesManager1,SalesManager2[10];
    SalesManager1=store();
    display(SalesManager1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(SalesManager2,size);
    display2(SalesManager2,size);

}
SalesManager store(){
    SalesManager temp;
    printf("Enter roll number of SalesManager : ");
    scanf("%d",&temp.id);
    getchar();
    printf("Enter name of SalesManager : ");
    fgets(temp.name,sizeof(temp.name),stdin);
    // scanf("%s",temp.name);
    printf("Enter salary of SalesManager : ");
    scanf("%f",&temp.salary);
    printf("Enter insentive of SalesManager : ");
    scanf("%d",&temp.insentive);
    printf("Enter target of SalesManager : ");
    scanf("%d",&temp.target);
    return temp;
}
void store2(SalesManager* SalesManager2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter SalesManager id : ");
        scanf("%d",&SalesManager2[i].id);
        printf("Enter SalesManager name : ");
        scanf("%s",SalesManager2[i].name);
        printf("Enter SalesManager salary : ");
        scanf("%f",&SalesManager2[i].salary);
        printf("Enter insentive : ");
        scanf("%f",&SalesManager2[i].insentive);
        printf("Enter target : ");
        scanf("%d",&SalesManager2[i].target);
    }
    
}
void display(SalesManager SalesManager1){
    printf("Roll number of SalesManager : %d\n",SalesManager1.id);
    printf("Name of SalesManager : %s\n",SalesManager1.name);
    printf("salary of SalesManager : %f\n",SalesManager1.salary);
    printf("insentive of SalesManager = %f\n",SalesManager1.insentive);
    printf("target of SalesManager =  %d\n",SalesManager1.target);
}
void display2(SalesManager* SalesManager2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",SalesManager2[i].id);
        printf("Name = %s\n",SalesManager2[i].name);
        printf("salary = %f\n",SalesManager2[i].salary);
        printf("insentive = %f\n",SalesManager2[i].insentive);
        printf("target =  %d\n",SalesManager2[i].target);
    }
}



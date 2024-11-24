#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct HR{
    int id;
    char name[50];
    float salary;
    float commission;
}HR;

HR store();
void display(HR);
void store2(HR* hr2,int size);
void display2(HR* hr2,int size);
void main(){
    HR hr1,hr2[10];
    hr1=store();
    display(hr1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(hr2,size);
    display2(hr2,size);

}
HR store(){
    HR temp;
    printf("Enter roll number of HR : ");
    scanf("%d",&temp.id);
    getchar();
    printf("Enter name of HR : ");
    fgets(temp.name,sizeof(temp.name),stdin);
    // scanf("%s",temp.name);
    printf("Enter salary of HR : ");
    scanf("%f",&temp.salary);
    return temp;
}
void store2(HR* hr2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter HR id : ");
        scanf("%d",&hr2[i].id);
        printf("Enter HR name : ");
        scanf("%s",hr2[i].name);
        printf("Enter HR salary : ");
        scanf("%f",&hr2[i].salary);
        printf("Enter commission : ");
        scanf("%f",&hr2[i].commission);
    }
    
}
void display(HR hr1){
    printf("Roll number of HR : %d\n",hr1.id);
    printf("Name of HR : %s\n",hr1.name);
    printf("salary of HR : %f\n",hr1.salary);
    printf("commission of HR = %f\n",hr1.commission);
}
void display2(HR* hr2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",hr2[i].id);
        printf("Name = %s\n",hr2[i].name);
        printf("salary = %f\n",hr2[i].salary);
        printf("commission = %f\n",hr2[i].commission);
    }
}



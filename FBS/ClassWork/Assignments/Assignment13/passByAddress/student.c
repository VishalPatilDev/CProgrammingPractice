#include <stdio.h>
#include <string.h>

typedef struct Student{
    int rollNo;
    char name[50];
    float marks;
}Student;


Student store();
void display(Student);
void store2(Student* s2,int size);
void display2(Student* s2,int size);
void main(){
    Student s1,s2[10];
    s1=store();
    display(s1);
    
    int size=3;
    store2(s2,size);
    display2(s2,size);

}
Student store(){
    Student temp;
    printf("Enter roll number of student : ");
    scanf("%d",&temp.rollNo);
    getchar();
    printf("Enter name of student : ");
    fgets(temp.name,sizeof(temp.name),stdin);
    // scanf("%s",temp.name);
    printf("Enter marks of student : ");
    scanf("%f",&temp.marks);
    return temp;
}
void store2(Student* s2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter student rollNo : ");
        scanf("%d",&s2[i].rollNo);
        printf("Enter student name : ");
        scanf("%s",s2[i].name);
        printf("Enter student marks : ");
        scanf("%f",&s2[i].marks);
    }
    
}
void display(Student s){
    printf("Roll number of Student : %d\n",s.rollNo);
    printf("Name of student : %s\n",s.name);
    printf("Marks of student : %f\n",s.marks);
}
void display2(Student* s2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",s2[i].rollNo);
        printf("Name = %s\n",s2[i].name);
        printf("Marks = %f\n",s2[i].marks);
    }
}



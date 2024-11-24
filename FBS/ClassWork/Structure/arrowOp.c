// #include<stdio.h>

// typedef struct Date{
//     int date;
//     int month;
//     int year;
// }Date;
// typedef struct Student {
//     int rollNo;
//     Date *doa;
// }Student;
// void main(){
//     Student s1;
//     store(&s1);
//     display(&s1);
// }
// store(Student * s1){
//     // s1->rollNo=44;
//     // s1->doa->date=14;
//     scanf("%d",&s1->rollNo);
//     scanf("%d",s1->doa->date);

// }
// display(Student* s1){
//     printf("%d\n",s1->rollNo);
//     printf("%d\n",s1->doa->date);
// }


#include<stdio.h>

typedef struct Class{
    Chair *ch;
}Class;
typedef struct Chair{
    int cNum;
    Student *s;
}Chair;
typedef struct Student{
    int rollNo;
    char name[10];
    Laptop *l;
}Student;
typedef struct Laptop{
    int ipAdd;
}Laptop;

void store(Class*);
void display(Class*);
void main(){
    Class c;
    store(&c);
    display(&c);
}

void store(Class* c){
    printf("Enter chair number : \n");
    scanf("%d",&c->ch->cNum);
    printf("Enter roll No of student associated to chair number %d = \n",c->ch->cNum);
    scanf("%d",&c->ch->s->rollNo);
    printf("Name of student associated to chair number %d and roll number %d is : \n",c->ch->cNum,c->ch->s->rollNo);
    scanf("%s",c->ch->s->name);
    printf("Enter the ipAdd for laptop associated to chair %d and roll number %d and student name : %s = \n",c->ch->cNum,c->ch->s->rollNo,c->ch->s->name);
    scanf("%d",&c->ch->s->l->ipAdd);
}

void display(Class* c){
    printf("Roll No. of student associated to chair number %d = %d\n",c->ch->cNum,c->ch->s->rollNo);
    printf("Name of student associated to chair number %d and roll number %d = %s \n",c->ch->cNum,c->ch->s->rollNo,c->ch->s->name);
    printf("IpAddress for laptop associated to chair %d and roll number %d and student name : %s = %d\n",c->ch->cNum,c->ch->s->rollNo,c->ch->s->name,c->ch->s->l->ipAdd);
}
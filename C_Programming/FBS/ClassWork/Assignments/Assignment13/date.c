#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Date{
    int date;
    char month[50];
    int year;
}Date;


Date store();
void display(Date);
void store2(Date* d2,int size);
void display2(Date* d2,int size);
void main(){
    Date d1,d2[10];
    d1=store();
    display(d1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(d2,size);
    display2(d2,size);

}
Date store(){
    Date temp;
    printf("Enter roll number of Date : ");
    scanf("%d",&temp.date);
    getchar();
    printf("Enter month of Date : ");
    fgets(temp.month,sizeof(temp.month),stdin);
    // scanf("%s",temp.month);
    printf("Enter year of Date : ");
    scanf("%d",&temp.year);
    return temp;
}
void store2(Date* d2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Date date : ");
        scanf("%d",&d2[i].date);
        printf("Enter Date month : ");
        scanf("%s",d2[i].month);
        printf("Enter Date year : ");
        scanf("%d",&d2[i].year);
    }
    
}
void display(Date s){
    printf("Roll number of Date : %d\n",s.date);
    printf("month of Date : %s\n",s.month);
    printf("year of Date : %d\n",s.year);
}
void display2(Date* d2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",d2[i].date);
        printf("month = %s\n",d2[i].month);
        printf("year = %d\n",d2[i].year);
    }
}



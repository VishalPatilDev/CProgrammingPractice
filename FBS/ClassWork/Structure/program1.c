#include<stdio.h>
#include<string.h>

struct Player{
    char name[50];
    int age;
    int jerNo;
    char teamName[50];
};
void main(){
    struct Player p1,p2;
    strcpy(p1.name,"Virat");
    p1.age=40;
    p1.jerNo=18;
    strcpy(p1.teamName,"India");
    printf("-------------------------Player1 deatails ----------------------\n");
    printf("Player1 Name = %s\n",p1.name);
    printf("Player1 age = %d\n",p1.age);
    printf("Player1 jerNo = %d\n",p1.jerNo);
    printf("Player1 teamName = %s\n",p1.teamName);

    printf("Enter Player2 name : ");
    scanf("%s",p2.name);
    printf("Enter Player2 age : ");
    scanf("%d",&p2.age);
    printf("Enter Jerno of Player2 : ");
    scanf("%d",&p2.jerNo);
    printf("Enter TeamName of Player2 : ");
    scanf("%s",p2.teamName);

    printf("----------------------Player2 deatails ---------------------\n");
    printf("Player2 Name = %s\n",p2.name);
    printf("Player2 age = %d\n",p2.age);
    printf("Player2 jerNo = %d\n",p2.jerNo);
    printf("Player2 teamName = %s\n",p2.teamName);
}
#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Time{
    int hour;
    int min;
    int sec;
}Time;


Time store();
void display(Time);
void store2(Time* t2,int size);
void display2(Time* t2,int size);
void main(){
    Time t1,t2[10];
    t1=store();
    display(t1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(t2,size);
    display2(t2,size);

}
Time store(){
    Time temp;
    printf("Enter roll number of Time : ");
    scanf("%d",&temp.hour);
    getchar();
    printf("Enter min of Time : ");
    fgets(temp.min,sizeof(temp.min),stdin);
    // scanf("%d",temp.min);
    printf("Enter sec of Time : ");
    scanf("%d",&temp.sec);
    return temp;
}
void store2(Time* t2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Time hour : ");
        scanf("%d",&t2[i].hour);
        printf("Enter Time min : ");
        scanf("%d",t2[i].min);
        printf("Enter Time sec : ");
        scanf("%d",&t2[i].sec);
    }
    
}
void display(Time s){
    printf("Roll number of Time : %d\n",s.hour);
    printf("min of Time : %d\n",s.min);
    printf("sec of Time : %d\n",s.sec);
}
void display2(Time* t2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",t2[i].hour);
        printf("min = %d\n",t2[i].min);
        printf("sec = %d\n",t2[i].sec);
    }
}



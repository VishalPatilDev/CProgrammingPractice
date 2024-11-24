#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Distance{
    int feet;
    float inch;
}Distance;


Distance store();
void display(Distance);
void store2(Distance* d2,int size);
void display2(Distance* d2,int size);
void main(){
    Distance d1,d2[10];
    d1=store();
    display(d1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(d2,size);
    display2(d2,size);

}
Distance store(){
    Distance temp;
    printf("Enter roll number of Distance : ");
    scanf("%d",&temp.feet);
    
    // scanf("%s",temp.name);
    printf("Enter inch of Distance : ");
    scanf("%f",&temp.inch);
    return temp;
}
void store2(Distance* d2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Distance feet : ");
        scanf("%d",&d2[i].feet);
        
        printf("Enter Distance inch : ");
        scanf("%f",&d2[i].inch);
    }
    
}
void display(Distance s){
    printf("Roll number of Distance : %d\n",s.feet);
    
    printf("inch of Distance : %f\n",s.inch);
}
void display2(Distance* d2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",d2[i].feet);
        printf("inch = %f\n",d2[i].inch);
    }
}



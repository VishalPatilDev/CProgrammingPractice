#include <stdio.h>
#include <string.h>
// Structure definitions
typedef struct Complex{
    int real;
    float imaginary;
}Complex;


Complex store();
void display(Complex);
void store2(Complex* c2,int size);
void display2(Complex* c2,int size);
void main(){
    Complex c1,c2[10];
    c1=store();
    display(c1);
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    store2(c2,size);
    display2(c2,size);

}
Complex store(){
    Complex temp;
    printf("Enter roll number of Complex : ");
    scanf("%d",&temp.real);
    
    // scanf("%s",temp.name);
    printf("Enter imaginary of Complex : ");
    scanf("%f",&temp.imaginary);
    return temp;
}
void store2(Complex* c2,int size)
{
    for(int i=0;i<size;i++){
        printf("Enter Complex real : ");
        scanf("%d",&c2[i].real);
        
        printf("Enter Complex imaginary : ");
        scanf("%f",&c2[i].imaginary);
    }
    
}
void display(Complex s){
    printf("Roll number of Complex : %d\n",s.real);
    
    printf("imaginary of Complex : %f\n",s.imaginary);
}
void display2(Complex* c2,int size){
    for(int i=0;i<size;i++){
        printf("Roll no = %d\n",c2[i].real);
        printf("imaginary = %f\n",c2[i].imaginary);
    }
}



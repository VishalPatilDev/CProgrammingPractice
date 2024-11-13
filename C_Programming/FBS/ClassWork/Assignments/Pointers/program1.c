#include<stdio.h>
int main(){
    int a = 10;
    double d = 10;
    int *x=&d;
    double *dptr = &a;
    char *ch = &a;
    int *y=&a;
    printf("%d\n",&a);    //6422284
    printf("%d\n",&d);    //6422272
    printf("----------------------------------------\n");
    printf("%d\n",*(x+0));  //0
    printf("%d\n",(*x+1));   //1
    printf("%d\n",y+2);     //6422292
    printf("%d\n",x+3);     //6422284
    printf("%d\n",(ch+3));  //6422287
    printf("%d\n",(x+4));   //6422288
    printf("%d\n",(*dptr));  //10
    printf("%d\n",(*y));    //10
    printf("%d\n",(x));     //6422272
    printf("%d\n",(&a));    //6422284
    printf("%d\n",*(dptr+4));  //4199048 => Garbage value
    printf("%d\n",(*dptr+0));  //10
    printf("%d\n",y+3);     //6422296
    return 0;
}
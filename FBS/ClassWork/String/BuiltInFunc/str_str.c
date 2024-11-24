// #include <stdio.h>
// #include <string.h>
// void main () 
// {
//    char str[] = "futureafter";
//    // "ch" is search string
//    char str1[]="after";
//    char *ret;
//    ret = strstr(str, "tur");
//    printf("Substring is: %s", ret);  
// }


// #include<stdio.h>
// char* mystrstr(char*,char*);
// void main(){
//    char str[]="everything iis connected";
//    char str2[]="is";
   
//    char *res=mystrstr(str,str2);
//    printf("%s",res);
// }
// char* mystrstr(char* str,char* str2){
//    int i=0,j;
//    while(str[i]!='\0'){
//       j=0;
//       if(str[i]==str2[j]){
//          i++;
//          j++;

//       }
      
//    }
// }



#include<stdio.h>
char* mystrstr(char*,char*);
void main(){
   char str[]="firstbitsolutions";
   char sub[]="it";
   char* res = mystrstr(str,sub);
   printf("%s",res);
}
char* mystrstr(char* str,char* sub){
   int i=0;
   while(str[i]!='\0'){
      int j=0,k=i;
      while(str[k++]==sub[j++]){
         if(sub[j]=='\0'){
            return &str[i];
         }
      }
      i++;
   }
}


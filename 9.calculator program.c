#include<stdio.h>
int main(){
    int a,b;
    char opp;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    printf("enter the operator +,-,*,/");
    scanf(" %c", &opp);

if (opp =='+') {
      printf("add of two number %d",a+b);
    }

     else if (opp=='-'){
        printf("sub of two numbers %d",a-b);
     }
     else if (opp=='*') {
        printf("mult of two numbers %d",a*b);
     }
     else if (opp=='/') {
             if (b==0){
             printf("not div");
             }
             else {
             printf("div of two numbers %d",a/b);
             }
     }

 else { 
        printf("not valid operator");
     } 
     
    return 0;
}

#include <stdio.h>
int main(){

float a,b,c;

printf("Enter value of the first number:");
scanf("%f",&a);

printf("Enter value of the second number:");
scanf("%f",&b);

printf("Enter value of the third number:");
scanf("%f",&c);


if (a>b) {
printf("%f greatest no is",a);
}
else if (b>c) {
printf("%f greatest no is",b);
}
else {
   printf("%f greatest no is",c);
}
return 0;


}

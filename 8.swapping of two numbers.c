#include <stdio.h>
int main(){

float a,b,c;

printf("Enter value of the first number:");
scanf("%f",&a);

printf("Enter value of the second number:");
scanf("%f",&b);

c=a;
a=b;
b=c;

printf("Value of a is %f and the value of b is %f",a,b);

return 0;

}

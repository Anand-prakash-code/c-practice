#include<stdio.h>

float divide( float x ,float y);

int main ()
{ float x,y;
printf("enter a number\n");
scanf("%f",&x); 

printf("enter second number\n");
scanf("%f",&y);

 divide (x,y); //you cant write the data type when you are calling fxn like example -float divide(float x,float y)
return 0;}

float divide(float x,float y)
{printf("so division of first number by second number is %0.3f:",x/y);
return x/y ;} 

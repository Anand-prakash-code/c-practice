#include<stdio.h>

void printTable( float n);

int main()
{ float n ;

printf("enter number");

scanf("%f",&n);


printTable( n); //u cant put data type in fxn call , also here n is called argument/actual parameter 

return 0;
}

void printTable (float n)
//here n is called parameter or formal parameter {
float i ;

for (i=1 ; i <=10; i++)
{ printf("\n%0.3f",i*n);}
}

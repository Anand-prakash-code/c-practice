#include<stdio.h>

int main ()
{  int *ptr ;//*ptr mean the value stored at the memory address to which ptr is pointing towards the variable
   int x;
    
   ptr =&x;
   *ptr =0 ;
   printf("ptr value is  %d\n",x); //0
   printf(" ptr = %d \n ",*ptr); //0

   *ptr+=5 ;
     printf("x is = %d\n",x); //5
     printf(" *ptr is %d\n",*ptr); //5
      
     

     (*ptr)++ ;
     printf(" x is %d\n",x);  //6
     printf (" *ptr is %d\n",*ptr); //6
    
    
    return 0;   }

 //print the value of i from its pointer to pointer .

 #include<stdio.h>

 int main ()
  {  int i= 10;
    int *ptr = &i;
    int **pptr= &(ptr) ;
  printf (" so the value of i is %d\n",i);
   printf (" so the value of ptr is %d\n ", *ptr)   ; 
  printf (" so the value of pptr is %d",**pptr);
  
   return 0;}

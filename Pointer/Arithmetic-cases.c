 #include<stdio.h>
 int main ()
 { int age=40 ;
    int *ptr = &age;
     printf("ptr is %u\n",ptr);
      *ptr++;
      
     printf("ptr is %u\n",ptr);
    
    *ptr--;
  printf (" ptr is %d\n",ptr);

 return 0;}

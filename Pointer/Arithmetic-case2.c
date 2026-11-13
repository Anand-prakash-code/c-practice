 #include<stdio.h>
 int main ()
 { char price ='*';
  char *ptr =&price;
  printf(" ptr is %c\n",*ptr); 
  (*ptr)++; 
  printf("ptr is %C\n ",*ptr);
 (*ptr)--;
 printf(" ptr is %c\n",*ptr);
 return 0;
}

 #include<stdio.h>

 int main ()
 { int age =3;
  int _age = 2;
  int *ptr =&age;
  int *_ptr = &_age;
  
  printf("subtraction of both ptr is %d",*ptr - *_ptr);


  char word='a';
  char _word= 'b';
  char *ptr1=&word;
  char*ptr2 =&_word;
  printf(" subtraction of both ptr now is is %d\n",*ptr1-*ptr2);
  
return 0;}

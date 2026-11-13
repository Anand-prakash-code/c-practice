 #include<stdio.h>

 int main ()
 { int age = 22;
   int *ptr = &age; // *ptr mean the value stored at the memory address that ptr is pointing to
   printf("%u\n",&age); // here &age mean address of age =642230
   printf(" %u\n",&ptr); // here &ptr mean address of ptr= 6422296
   printf(" %u\n",*ptr); // it gives value of that address = 22
   printf("%u\n",ptr);// ptr mean stores that address of age =6422300
   return 0; } 

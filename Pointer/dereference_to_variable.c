 #include<stdio.h>

 int main ()
 {  int school_number = 2289;
     int *address = &school_number;

     int regi = *address ;

   printf(" so value is %d",regi); //2289
return 0; }

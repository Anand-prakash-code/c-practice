 #include<stdio.h>

 int main ()
 { int age= 4;
    int *ptr = &age ; // when we use * with a variable it says that variable is not a reegular variable
    printf ("%d\n ",age); // print value=4
    printf(" %d\n",&age);// print address=6422296
    printf("%d\n",*ptr);//print value =4
    printf (" %d\n",&(*ptr));// address of the=6422296
    printf("%d\n",*(&age));// value at the address =4

 return 0 ;}

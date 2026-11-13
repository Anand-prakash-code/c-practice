#include<stdio.h>

void printhello() ;      // fxn declaration or prototype

void printgoodbye();

int main ()
{ printhello ();        //fxn call
printgoodbye();
return 0;}

void printhello()            // fxn definition
{ printf("hello\n");
}


void printgoodbye()
{ printf("goodbye");}

#include<stdio.h>

 int main (){
    int arrD []={ 1,2,3,4,5};
    int  *arr = &arrD[0] ;
    printf (" we got %d",*(arr+2));
    printf (" we got %d", *(arr +5)): //will get a random garbage value stored at memory address like i got 6422280

    return 0;
 }

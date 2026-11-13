 
#include<stdio.h>



void countUp(int n) {
    if (n == 0) return;   // Base case
    countUp(n - 1);       // Recursive call
    printf("%d ", n);  
    return  ;// Action
}
 int main ()
{ int n =5 ;

countUp(n);

    
    
    return 0 ;
}

// Print the sum of the integers in the array.where first line is no of students 

Sample Input 0
6
16 13 7 2 1 12 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int sum =0;
int students ;
scanf("%d",&students);
    int *arr = (int*) malloc(students * sizeof (int));
     
     for ( int i = 0 ; i < students ; i++)
     { scanf("%d ",&arr[i]);
     
      sum += arr [i] ;} 
    
    printf("%d",sum);
    free (arr);
   
    return 0;
}

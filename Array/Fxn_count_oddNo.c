 //write a fxn to count the no of odd nos in an array.
 #include<stdio.h>

 int countodd ( int arr[],int n);    
    int main ()
    {  int arr []= {1,2,3,4,10,6};
       printf (" %d", countodd (arr,6)) ;//this is the fxn call inside printf
      return 0 ;}
  
        int countodd ( int arr [], int n ){ 
         int count =0 ;
         for ( int i = 0 ;i<n ; i++)
         if (arr[i] %2 !=0)
            {count ++;} 
          return count ; // add this line
        }

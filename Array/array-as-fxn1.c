 #include<stdio.h>

 void prinTable ( int arry[],int n);

 int main()
 { int arry []= { 1,2,3,4,5,6,7};

 prinTable( arry, 7);
    return 0;}

void prinTable ( int arry [], int n){
for(int i=0 ;i<n ;i++){ printf ("%d\t",arry[i]);
 }
 printf("\n");
}

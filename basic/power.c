 #include<stdio.h>

int power (int a, int b)
{ if (b==0){return 1;}
 else return power(a,b-1)*a;
}

 int main ()
 { int a =7;
    int b=3;
    printf("7 to the power of 3 is %d",power(7,3));

    return 0;
 }

 #include<stdio.h>

 int main ()
 { float price[3];

 printf (" enter price: \n");
 scanf ("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);

printf("price is %0.2f\n",price[0]+ 0.18*price[0]);
printf("price is %0.2f\n",price[1] +0.18* price[1]);
printf("price is %0.2f\n",price[2]+0.18*price[2]);

 return 0;
}

#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}




//or









#include <stdio.h>

int update(int a,int b) {int sum,diff ;
      return sum =a+b ;
    
}
int main() {
    int a, b,sum,diff;
   
    
    scanf("%d %d", &a, &b);
  sum =  update(a, b);
    printf("%d",sum);
    diff = update(a,b);
    printf("\n%d",abs(a-b));

    return 0;
}

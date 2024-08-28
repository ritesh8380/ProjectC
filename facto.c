#include <stdio.h>
int main(){
    int product,a,b;
    printf("chose whose factorial you want : \t");
    scanf("%d", &b);
    product=1;
    a=1;
    while(a <= b ){
    product*=a;
    a++;
    }
    printf("The factorial of %d is %d\n",b,product);
return 0;
}

/*Explaination

1. Here product is initialized to 1 not 0 because if we do product with zero we will empty handed and we will get a garbage value.
2.then a initialization is important then in loop iteration we wrote for product will be multiplied by a which is an increment.
*/
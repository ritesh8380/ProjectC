#include <stdio.h>
int main(){
    int product,a,b;
    product = 1;
    printf("Chose whose factorial you want : \t");
    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
       product*=b;
    }

    printf("The factorial of %d is %d \n",a,product);
    
    
return 0;
}
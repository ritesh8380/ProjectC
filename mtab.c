#include <stdio.h>
int main(){
    int a,b,c;
    printf("whose Multiplication table you want :   \t");
    scanf("%d", &a);
    for (int b = 1; b <= 10; b++)
    {   c = a*b;
        printf("%d x %d = %d\n",a,b,c);
    }
    

return 0;
}
#include <stdio.h>
int main(){
    int a,b,sum,c;
    printf("sum of multiplication table : \t");
    scanf("%d", &a);
    b = 1;
    sum=0;
    while (b <= a)
    {   c = a*b;
        sum+=c;
        b++;
    }

    printf("The summation is %d\n",sum);
    
return 0;
}
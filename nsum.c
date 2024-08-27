#include <stdio.h>
int main(){
    int a, sum,n;
    a=1;
    sum = 0;
    printf("chose till what number you want the sum :  \t");
    scanf("%d", &n);

    while (a <= n)
    { 
        sum+=a;
        a++;
    }
printf("This is the sum of first 10 natural number %d\n",sum);
return 0;

} 
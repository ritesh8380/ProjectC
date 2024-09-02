#include <stdio.h>
int fibon(int);

int fibon(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
        return fibon(n - 1) + fibon(n - 2);
}
int main()
{
    int n;
    printf("Tell me the nth term i will tell you fibonacci value : \t");
    scanf("%d", &n);
    
    printf("The fibonacci value for %d is %d\n", n, fibon(n));

    return 0;
}
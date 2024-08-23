#include <stdio.h>

int main()
{
    long long i, d;
    int b;

    printf("Input: \t");
    scanf("%lld", &i);

    printf("Number by which you have to test for the divisibility: \t");
    scanf("%lld", &d);

    if (d == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 1;
    }

    b = i % d;

    printf("Result is %d\n", b);

    if (b == 0)
    {
        printf("YES YOUR INPUT IS DIVISIBLE\n");
    }
    else
    {
        printf("NO YOUR INPUT IS NOT DIVISIBLE\n");
    }

    return 0;
}

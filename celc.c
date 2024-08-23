#include <stdio.h>
int main()
{
    float c;
    printf("Please input your temperature in Degree Celcius : \t");
    scanf("%f", &c);
    printf("your Output in fehreheit is : %.2f\n", (9.0/5.0*c) + 32);

    return 0;
}
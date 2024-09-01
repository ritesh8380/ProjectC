#include <stdio.h>
float fehren(float celsius);                     // (fuction declaration)

float fehren(float celsius)                      // (function definition)
{                                           
    return (9.0f / 5.0f * celsius) + 32.0f;      // (precision done for floating numbers)
}
int main()
{
    int celsius;
    printf("chose temp in celcius : \t");
    scanf("%d", &celsius);
    float result = (float)fehren(celsius);        // (type casting done here)

    printf("%d celcius is %.2f in fehrenheit\n", celsius, result);

    return 0;
}
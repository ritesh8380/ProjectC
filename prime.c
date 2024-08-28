#include <stdio.h>
int main()
{
    int number, divisor, is_prime;
    is_prime = 1;
    printf("Input for prime number test : \t");
    scanf("%d", &number);

    if (number <= 1)
    {
        is_prime = 0;
    }
    else
    {
        is_prime = 1;
        for (int divisor = 2; divisor < number; divisor++)
        {
            if (number % divisor == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
    {
        printf("%d is prime number \n", number);
    }
    else
    {
        printf("%d is not prime number \n", number);
    }

return 0;
}

/*
explaination
1.include everything in stdio.h file
2.descriptive varriables and constant values declaration
3.then giving prime initialization
4.if and else statement for value identification in c programme where if has the value declaration.
5.else if this condition then this then else statement which contains for loop which will check for prime number.
6.if divisor got then not prime number if got then prime number.
7.after this declaration all information will be printed outside the loop function and which will print for the prime or not prime number. */
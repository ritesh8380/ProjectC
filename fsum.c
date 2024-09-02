#include <stdio.h> //extenssion file

int sumation(int); // function declaration

int summation(int n)
{ 
    /*function definition recursion if n=5 the function will start summation(5)=5+(5-1) then n will become
    4 and then same summation(4) will get executed and then summation(3) till 1 and then as n=1 base condition
    get satisfied and summation will be take place from n to 1*/
    if (n == 1)
    {
        return 1;
    }
    return n + summation(n - 1);
}
int main()
{
    int n;
    printf("chose first n natural numbers for summation : \t");
    scanf("%d", &n);
    printf("The Summation of %d natural number is %d\n", n, summation(n));

    return 0;
}

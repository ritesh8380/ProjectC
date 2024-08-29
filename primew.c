#include <stdio.h>
int main(){
    int number,prime,divisor;
    divisor = 2;
    prime = 1;
    printf("Chose for prime number test : \t");
    scanf("%d",&number);

    if (number <= 1)
    {
        prime = 0;
    }
    else{
        while (number > divisor)
        {
            if (number%divisor == 0)
            {
                prime = 0;
                break;
            }
            divisor++;
            
        }
        if (prime)
        {
            printf(" %d is prime number\n",number);
        }
        else{
            printf("%d is not a prime number\n",number);
        }
        
        
    }
    

return 0;
}

/* 
1.always use divisor++ after an iteration completion then only .
2.(number%divisor == 0) where number is numerator and divisor is denominator. 
3.if condition is true then only execution takes place.
*/
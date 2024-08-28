#include <stdio.h>
int main(){
    int number,divisor,is_prime;
    is_prime = 1;
    printf("Chose the input for is_prime number test \t");
    scanf("%d",&number);
    if (number <= 1)
    {
        is_prime = 0;
    }
        divisor = 2;
        do
        { if (number%divisor == 0)
        {
          is_prime = 0;
          break;
        }
        divisor++;
        
        }
        while (divisor < number);
        if (is_prime)
        {
            printf("%d is a prime number \n",number);
        }
        else {
            printf("%d is not a prime number \n",number);
        }
        
        
    
    
return 0;
}
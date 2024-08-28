#include <stdio.h>
int main(){
    int a,sum,b;
    b = 1;
    sum = 0;
    printf("chose till what number you want summation of natural number : \t");
    scanf("%d", &a);
    while (b <= a)
    {   
        sum += b;
        b++;
    }

    printf("The summation of first %d natural number is %d\n",a,sum);
    
    
return 0;
}

/*explaination.

1.iclude everything in stdio.h file
2.initialisation of the sum varriable and due to natural initialize start as 1
3.Then took the value from user 
4.then started while loop whrere b will be added to the sum then value will increase 
(remember)
if you try to first increase then summation then your programme will give you ambiguous results.
if you include printf in the while loop then your print will also execute till loop exit.

*/
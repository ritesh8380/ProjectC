#include <stdio.h>
int main(){
    long long i,d;
    int b;
    float result;
    printf("Your input please : \t");
    scanf("%lld", &i);
    printf("Please give me the number by which you want to do divisibility test :  \t");
    scanf("%lld", &d);
    
    if(d==0){
        printf("[(ERROR)] cannot be divide by 0 \n");
        }

    b = i%d;
    result =(float)i/d;
    printf("Result = %.5f\n",result);

    if(b==0){ printf("The input passed the test\n");
    }
    else{
        printf("The input failed the divisibility test\n");
    }

return 0;
}
#include <stdio.h>
int main(){
    float p,r,t;
    printf("What is the Principle amount : \t");
    scanf("%f",&p);
    printf("what is Rate of interest : \t");
    scanf("%f",&r);
    printf("How many years you got from bank to repay the loan :\t");
    scanf("%f",&t);
    printf("This is your Simple intrest :  %.2f\n",(p*r*t)/100);

return 0;
}
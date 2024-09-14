#include <stdio.h>
int funct(int *);

int funct(int *a){  //always remember you have to declare the funciton
    return *a * 10;
}
int main(){
    int x = 45;
    int result = funct(&x);
    printf("%d is the 10 times of 45\n",result);
return 0;
} 
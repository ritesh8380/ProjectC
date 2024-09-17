#include <stdio.h>
int main(){
int nat[] = {1,2,3,4,5,6,7,8,9,10};
int *ptr = nat;
printf("The value of address %lu is %d\n",(unsigned long)(ptr+3),*(ptr+3));
return 0;
} 
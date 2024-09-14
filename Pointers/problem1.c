#include <stdio.h>
int main(){
    int a = 5;
    int *b = &a;
    printf("%p is the address of a\n",(void*)&a);
    printf("%lu is the non hexadecimal adress of a\n", (unsigned long)&a);  //Not void but unsigned long is very important bhai ko chhota mistake mat samjho
    printf("%d is the value of integer a\n",*&a);

    printf("%d is the value posess by b varriable\n",*b);
    printf("%p is the address of int *b \n",&b);
    printf("%lu is the address of *b non hexadecimal form\n",(unsigned long)&b);

return 0;
}
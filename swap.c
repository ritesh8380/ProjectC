#include <stdio.h>
void swap(int* a,int* b);

void swap(int *a, int *b) {
    int temp;
    temp = *a;      /*explaination. 1.here temp varriable becomes value of a i.e 5
                        2.now c knows a =5 then *a = *b  c dont know abut value of b for now because
                          clang is procedure based coding language so procedure says value of b is now 5
                          3.then b is equals to temp and then c will find for temp value and will end up with temp = 5
                            then c language says value of b is 5.

                        IMP: THIS HAPPENS ONLY IF YOU USE POINTERS BECAUSE YOU ARE PRINTING THE ADDRESS VALUES I.E YOU ARE CHANGING
                             THE VALUE FROM THE FORGE.*/
    *a = *b;      
    *b = temp;
}
int main(){
    int a = 5,b=4;
    swap(&a,&b);
    printf("value of a is %d and value of b is %d\n",a,b);
return 0;
}
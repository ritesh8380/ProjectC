#include <stdio.h>
int main(){
    int marks[] = {5,10,7,8};
    for (int j = 0; j <= 4; j++) 
    {
        printf("The address of marks is %lu\n",(unsigned long)&marks[j]); //whenever we run the programme we will get always a different address.
        int *ptr = &marks[j];
        printf("The address of ptr is %p\n",marks); //is equivalent to printf("The address of ptr is %p\n",marks[0]);
        printf("The address of ptr is %lu\n",(unsigned long)marks);
        ptr++; //put the programme to switch to the one step ahead at every iteration.
        printf("The address of ptr is %d\n",*ptr);
    }
    /*few people will say all the address is same you was telling address will be different if you run it differently then difference will be appear*/
return 0;
}
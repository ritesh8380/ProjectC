#include <stdio.h>              //call by reference (sum function by pointers)
int sum(int*,int*);
int sum(int *a,int *b){
     *a = 6; 
     *b = 8;
    return (*a + *b);
}
int main(){
    int a = 5,b = 5;  
    printf("The value of *a is %d\n",a);
    printf("the sum is %d\n",sum(&a,&b));
    
return 0;
} 

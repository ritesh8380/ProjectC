#include <stdio.h>
float avg(int*,int*);           //always remember prototype only contains return value no operation
int sum(int*,int*);

float avg(int*a,int*b){
    return (*a + *b)/2.0f;      //function contains the example integer to be used in the function definition
}
int sum(int* a,int* b){
    return (*a + *b);
}

int main(){
  int  a = 1;
  int* A = &a;
                        //if we write int* a = 1 which will represent that int a is representing the value of 1 but there is no existing
  int  b = 5;                       //pointer whose value is even one is not a pointer thats why it will show you error
  int* B = &b;                     

  printf("This is the sum : %d\n",sum(&*A,&*B));
  printf("This is the average : %.2f\n\n",avg(&*A,&*B));

  printf("The address of A is  (whole numeric form) %lu\n",(unsigned long)&A); 
  printf("The address of A is (whole numeric form) %lu\n\n",(unsigned long)&B);

  printf("The address of A is %p\n",((void*)&A));   /*different compilers have different features and capabilities so using void* is good habbit which*/ 
  printf("The address of A is %p\n\n",((void*)&B));   /*reduces the future errors by the different compilers*/

  printf("The address of function sum is  (whole numeric form) %lu\n",(unsigned long)&sum);
  printf("The address of address of function avg is (whole numeric form) %lu\n\n",(unsigned long)&avg);

  printf("The address of sum is %p\n",((void*)&sum));
  printf("The address of avg is %p\n\n",((void*)&avg));

return 0;
}
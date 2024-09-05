#include <stdio.h>           //call by values (call by the values substitution)
int sum(int,int);
int sum(int a,int b){
    return a+b;
}
int main(){
    int x = 3,y = 5;
    printf("The sum is : %d\n",sum(x,y));
return 0;
}
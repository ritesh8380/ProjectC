#include <stdio.h> 


int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b,result;
    printf("chose the number a: \t");
    scanf("%d",&a);
    printf("chose the number b: \t");
    scanf("%d",&b);

result = sum(a,b);
printf("%d and %d summation is %d\n",a,b,result);
return 0;

}

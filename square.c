#include <stdio.h>
#include <math.h>
int square(int);

int square(int a){
    int result = (int)pow(a,2);   //type casting done here
    printf("square is %d\n",result);
return result;
}
int main(){
    int a;
    printf("chose \t");
    scanf("%d",&a);
   int result = square(a);
return 0;
}
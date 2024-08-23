/*Problem 1.
Write a c programme to calculate the area of rectangle*/


#include <stdio.h>
int main(){
    float a,b;
    printf("Enter Length\t");
    scanf("%f",&a);
    printf("you entered Length as %f\n",a);
    printf("Enter Breadth\t");
    scanf("%f",&b);
    printf("you entered Breadth as %f\n",b);
    printf("\n");
    printf("operation in progress....\n");
    printf("\n");
    printf("This is the area of Rectangle\t %.2f\n",a*b);
    return 0;
}



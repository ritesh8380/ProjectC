#include <stdio.h> //include my code in stdio.h file
int sum(int, int, int); //fuction prototype or function declaration
int sum(int a, int b, int c)//funciton definiton
{
    return a + b + c;   //successfully added the return value and done with fuction
}
int main()
{
    int a, b, c;
    printf("chose a : \t");
    scanf(" %d", &a);
    printf("chose b : \t");
    scanf(" %d", &b);
    printf("chose c : \t");
    scanf(" %d", &c);
    float result = (float)sum(a, b, c) / 3;  /* typecasting used because int and int operation will give interger
                                                which is not precise for average calculation so for precision i want result in     
                                                floating point number instead result so i typecasted into float*/
    printf("then average is : %.2f\n", result);

    return 0;
}
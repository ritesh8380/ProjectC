                      #include <stdio.h>
int main()
{
    float r, h, pi;
    pi = 3.14;
    printf("What is the radius of the cylinder :\t");
    scanf("%f", &r);
    printf("what is the Height of the cylinder :\t");
    scanf("%f", &h);
    printf("Area of the Cylinder is : %.2f\n", pi * (r * r) * h);
    return 0;
}
#include <stdio.h>
float gac(float a, float b); // fuction prototype only tells about type int or float which will be in our function

float gac(float mass, float acceleration)
{ /*this is fuction definition where we take example varriables like x or y and difine the
    the work of our function and the operation always in return section it is rough function or rough idea to the gcc compilers*/
    return mass * acceleration;
}
int main()
{
    float mass;
    printf("what is the mass of the object : \t");
    scanf("%f", &mass);
    float acceleration = 9.8;
    printf("The gravitaional acceleration on the object with mass %.2f is %.2f Newton \n", mass, gac(mass, acceleration));

    return 0;
}
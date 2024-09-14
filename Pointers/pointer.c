#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i;  /*j is pointing to i  if any int is assigning any pointer or representing any pointer it deserves star because it is carrying
                     a pointer into the programme but real reason behind this is when you write int i = 72 integer assigned with value 72 but 
                     when you write int *i = &a then it become pointer which will carry the value of a pointer.*/

    printf(" address of i is %p\n", (void*)&i);  // print pointer i.e %p at the address of i i.e &i.

    printf(" address of i is %p\n\n", j); /*print pointer j as the pointer j was holding i it will print the same value as i
                                               but as i give '&' i.e address operator that will print different value because different addresss*/

    printf(" address of i is %lu\n", (unsigned long)&i);
    printf(" address of i is %lu\n\n", (unsigned long)j);

    printf("value of int i is %d\n",i); 
    
    printf("value of i is %d\n",*j); /*as j stored a value of i so it printed as we commanded for *j value if i ask for only j then error will occur 
                                      because j dont have its individual value.*/

    printf("value of pointer i is %d\n\n",*(&i)); /*so as we checked for the value of j with star what about i which has its own value (if you know address)
                                                  i.e if we command for value of i which has address i then it can be possible*/
    
    float i1 = 255.52;
    float *j2 = &i1;

    printf("This is the float value of i %f\n",i1);
    printf("This is the float value of j %f\n",*j2);
    printf("This is the float value of pointer j address %f\n\n",*j2);

    char a = 'A';
    char *b = &a;

    printf("This is the character value of a %c\n",a);
    printf("This is the character value of a %c\n\n",*b);

    printf("the address of a is %p\n",&a);
    printf("the address of a is %lu\n\n",(unsigned long)(&a));
    printf("the address of *b is %p\n",(void*)b);
    printf("the value stored at b is %lu\n",(long unsigned)(&b));

return 0;
}
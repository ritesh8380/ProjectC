#include <stdio.h>
int main(){
    int a;
    a=0;
    while (a < 20)
    {  a++; 
        if (a >= 10)
        {
            printf("%d\n",a);
            
            
        }
        
    }
    
return 0;
}

/* 1. learning i got from this code is a <= 20 will print 21 also which is not the requirement because as condition gets true increment takes place
and 21 value also satisfies the anothere if condition thats why 21 was also getting printed so a < 20 is better choice and well choise to adjust the value*/

/*2.if you use break then loop will instantly get stopped and the command execution stops but if we use continue then it will skip the iteration and proceed*/
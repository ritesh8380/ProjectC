#include <stdio.h>
int main()
{
    int tab[10];
    int input;

    do
    {
        printf("Whose Multiplication table you want : \t");
        scanf("%d", &input);

        if(input == 0){
            printf("You are successfully out of the programme thanks to use our portal HAVE A NICE DAY\n");
        }
        else if (input != 0)
        {
             for (int i = 0; i < 10; i++)
            {
                tab[i] = input * (i + 1);
            }
            for (int i = 0; i < 10; i++)
            {
                printf("%d x %d = %d\n", input, (i + 1), tab[i]);
            }
            printf("if you want to leave press 0\n"); 
    } 
    }while (input != 0);
        

    return 0;
}
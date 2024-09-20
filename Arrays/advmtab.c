#include <stdio.h>
void recheck(){
    int num;
            printf("Numbers of multiplication table you want to reverrify\t");
            scanf("%d", &num);

            int arr[num];
            int mul[num][10];
            int init = 0;

            for (int i = 0; i < num; i++)
            {
                if (num != 0)
                {
                    init++;
                }
        
                printf("Chose input %d :\t", init);
                scanf("%d", &arr[i]);
            }
        

            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    mul[i][j] = arr[i] * (j + 1);
                }
            }

            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    printf("The value of mul[%d][%d] is %d\n", i, j, mul[i][j]);
                }
                {
                    printf("\n");
                }
            }
        }

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
        else if (input == 1)
        {
            recheck();
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
        {
            printf("\n");
        }
            printf("if you want to leave press 0 and if you want to enter into reverrify funcition press 1\n"); 
        }
    } while (input != 0);
        
    return 0;
}
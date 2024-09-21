#include <stdio.h>
int main()
{
    char st[] = "abc";
    for (int i = 0; i < 3; i++)
    {
        printf("The character is %c\n",st[i]); //This print the string each element.
    }

    printf("%s", st); // this is printing all the strings element without for loop but only if double quoted.

    getchar(); /*getchar is the function which does not terminate the programme but wait for the character input
                 why this because my linux console is showing output fastly and gets terminate and the process is very fast such that i am unable
                 to see the output thats why getchar(); helps the most*/
    return 0;
}
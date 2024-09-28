#include <stdio.h>
#include <string.h>
int main()
{
    int cont;
    char str[40];
    printf("press 0 to encrypt your typed texts or press 1 to decode the text : \t");
    scanf("%d", &cont);
    getchar();
    if (cont == 0)
    {
        printf("Type any thing to get it in code language :\n");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str,"\0")] = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i] + 1;
        }
        printf("%s\n", str);
    }
    else if (cont == 1)
    {
        printf("Type your encrypted Text \n");
        fgets(str, sizeof(str), stdin);
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i] - 1;
        }
        printf("%s\n", str);
    }

    return 0;
}
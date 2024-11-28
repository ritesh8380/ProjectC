#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    char st[20];
    printf("please enter your pin : \t");
    fgets(str, sizeof(str), stdin);
    printf("please renter the pin : \t");
    fgets(st, sizeof(st), stdin);
    strcmp(str, st);
    str[strcspn(str, "\n")] = '0';
    st[strcspn(st, "\n")] = '0';
    if (strcmp(str, st) == 0)
    {
        printf("pin set successfully\n");
    }
    else
    {
        printf("PIN doesnt match please go back its private\n");
    }

    return 0;
}

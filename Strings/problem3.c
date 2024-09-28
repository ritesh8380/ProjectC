#include <stdio.h>
#include <string.h>
int strlen_my(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main()
{
    char str[30];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("with spaces there are %d characters\n", strlen_my(str));
    return 0;
}
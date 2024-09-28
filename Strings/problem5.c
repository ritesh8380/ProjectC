#include <stdio.h>
void my_strcpy(char arr[], char str[])
{
    int i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        str[i] = arr[i];
    }
    str[i] = '\0';
}
int main(){
    char arr[] = "Harry";
    char str[20];
    my_strcpy(arr,str);
    printf("%s,%s\n",str,arr);

    return 0;
}
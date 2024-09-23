#include <stdio.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    return 0;
}
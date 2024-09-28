#include <stdio.h>
#include <string.h>
int main(){
    char arr[40];
    char str[40];
    fgets(arr,sizeof(arr),stdin);
    printf("%s\t(current string)\n",arr);
    strcpy(str,arr);
    printf("%s\t (copied string)\n",str);
return 0;
}
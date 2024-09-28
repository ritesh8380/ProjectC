#include <stdio.h>
char *slice_str(char *arr,int i,int j){
    char *ptr1 = &arr[i];
    char *ptr2 = &arr[j];

    arr = ptr1;   //start from here i.e str is addressing the ptr 1 i.e str[i] in my case and value is 1 thats why it will began from 1.
    arr[j] = '\0'; //end the code from here by adding terminating character.
    return arr;
}
int main(){
    char str[40];
    fgets(str,sizeof(str),stdin);
    printf("%s\n",slice_str(str,1,7));
return 0;
}
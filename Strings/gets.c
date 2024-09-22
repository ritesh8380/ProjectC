#include <stdio.h>
int main(){
    char st[30];
    fgets(st,sizeof(st),stdin); //clang depriccated the gets() funcion because of input overflow buffer errors thats why c11 standards used fgets instead gets.
    printf("%s",st);            /*here fgets takes 1.string specifiaion 2.sizeof so that the print should know how much to print 3.stdin i.e standard input*/
    printf("Hello\n");
return 0;
}




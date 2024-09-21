#include <stdio.h>
int main(){
    char st[6];  //This will take 5 inputs + 1 null value.

    /*printf("Type one word and i will display it\n");
    scanf("%s",st);
    printf("%s\t\n",st);*/

    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&st[i]);
                                     //we can also write like this scanf("%s",st); but only if 
    }
    for (int i = 0; i < 5; i++)  //in scanf function in strings we dont want to add "\0" i.e null character.
    {
        printf("%c",st[i]);
    }
    printf("\n");
return 0;
} 
/*
Here it is important to talk :
1.Here this command will accept 5 input if not space given i.e 12345 acceptable but 1 2 3 4 5 is not because st[0]=1 and st[1]=null because of space
  then due to this spaces the programme will only accept 3 inputs only*/
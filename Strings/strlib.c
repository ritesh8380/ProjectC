#include <stdio.h>
#include <string.h>
int main(){
    char source[40];
    char cont[10] = "joke";
    fgets(source,sizeof(source),stdin);
    printf("%ld (including spaces)\n",strlen(source)-1);
    source[strcspn(source, "\n")] = 0; // Remove newline


    
    /*if someone type Ritesh then string will show 7 instead of 6 because it is printting it in next line*/
    /*here %d uses this only if your programme knows the string elements if unknown then you should use %ld*/
    
    char target[30];
    strcpy(target,source);  //pehle khali kitab then bhari kitab to copy something matlabe khali kitab mein chhhpo.
    printf("This is your source string : %s",source); 
    printf("This is your target string : %s (soure ka chhapa)",target);

    strcat(source,target);
    printf("This is concatinated : %s (source mein target ko concatinate kiya)\n",source);
    
    //when you print string with %s then you dont have to apply \n i.e newline.
    int a = strcmp(source,cont);
    printf("%d\n",strcmp(source, cont));

    if (a < 0)
    {printf("The ascii value of %c is %d and ascii value of %c is %d where %d is greater than %d\n",source[0],source[0],cont[0],cont[0],cont[0],source[0]);
    printf("Thats why negative\n");
    }
    else if(a > 0)
    {printf("The ascii value of %c is %d and ascii value of %c is %d where %d is smaller than %d\n",source[0],source[0],cont[0],cont[0],cont[0],source[0]);
    printf("Thats why positive\n");
    }

    /*Here source will be compared with cont
    1.if source first character is first in ascii table then output will be negative just like ex(Joke compare with joke)
    2.strcmp will print 0 if same input as it is given then but fgets adds a newline character extra*/

return 0;
}
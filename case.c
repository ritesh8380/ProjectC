#include <stdio.h>
int main(){
   char a;
   printf("your letter please :  \t");
   scanf("%c",&a);
   printf("you ascii value is %d\n",a);
   if(a>'a' && a<='z'){
    printf("Your letter is lowercase\n");
   }
   else{
    printf("letter is not lowercase\n");
   }
return 0;
}

/*it will be better to use alphabets literals for better readability
i.e if(a>'a' && a<='z')*/
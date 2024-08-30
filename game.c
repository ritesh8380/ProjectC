#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random_number,input,max_random;
    int guess_no = 0;
    srand(time(NULL));
    int option;
    printf("hello welcome to guess game press 1 for tutorial and 2 to proceed \t");
    scanf("%d",&option);
    if (option==1)
    {
        printf("1.you have to chose the maximum range for random values greater the maximum number tougher it gets to guess\n");
        printf("2.chose the maximum value and input your guess you will get hints by the system for better guessings of number\n");
    }
    else if(option==2){
    printf("please tell me the maximum number for randomness : \t");
    scanf("%d",&max_random);
    random_number = rand()%(max_random+1);

    do {
        printf("I chose the number now guess it : \t");
        scanf("%d",&input);
        
        if(random_number < input){
            printf("%d is too high think about slightly small number\n",input);
        }
        else if(random_number > input){
            printf("%d is too low think about slightly greater number\n",input);
        }
        
        else{
            printf("%d is correct guess congrats you got it \n",input);
        }
        guess_no++;

        }
        
        while (input!=random_number);
        printf("you guesed in %d attempts\n",guess_no);
    }
    else{
        printf("%d is invalid input (ERR0R)\n",option);
    }
    

return 0;
}
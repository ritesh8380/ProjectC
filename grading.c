#include <stdio.h>
int main(){
    int marks;
    printf("What was your score [(round off only)] :  \t");
    scanf("%d", &marks);

    if(marks<=100 && marks>=90){
        printf("Your grade is [A] \n");
    }
    else if(marks<=80 && marks>=70){
        printf("Your grade is [B]  \n");
    }
    else if(marks<=70 && marks>=60){
        printf("Your grade is [C] \n");
    }
    else if(marks<=60 && marks>=50){
        printf("Your grade is [D] \n");
    }
    else if(marks<=50 && marks>=40){
        printf("Your grade is [E] \n");
    }
    
    else
    { 
        printf("sorry but you have to reappear for the exam \n");
    }

return 0;
}
    

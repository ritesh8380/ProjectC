#include <stdio.h>
void good_morning();      //function prototype or function declaration.
void good_afternoon();
void good_evening();

void good_morning(){     //function definition.
    printf("good morning \n");
}
void good_afternoon(){
    printf("good afternoon \n");
}
void good_evening(){
    printf("good evening \n");
}
int main(){
     good_morning();       //function calling.
     good_afternoon();
     good_evening();
return 0;
}

//important dont assigh return type while calling function
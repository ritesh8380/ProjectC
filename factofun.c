#include <stdio.h>
int facto(int);   //fuction declaration

int facto(int n){   //function definition
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*facto(n-1);
    }
}
int main(){
    int n;
    printf("choose whose factorial you want : \t");
    scanf("%d",&n);
    if(n<0){
        printf("sorry factorial for negative numbers is not defined\n");
    }
    int result = facto(n);     
     printf("the factorial is %d\n",result);
     return 0;
}

//1.if you are using function then if int is your return type then you have to return something in integer otherwise error will be displayed
//2.always remember c programming is procedure based computer language.
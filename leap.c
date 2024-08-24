#include <stdio.h>
int main(){
    int year;
    printf("Tell me the year : \t");
    scanf("%d", &year);
    if((year%4==0 && year%100!=0) || year%400 == 0){
        printf("The entry is Leap year\n");
    }
    else{
    printf("Entry is not leap year\n");
    }
return 0;
}

/*
in this following project i got wrong logic
if we consider 2024 as my entry which is leap year actually
suppose two conditions we are taking :
1.if((year%4==0 && year%400==0) || year%100!=0);
in this 2024%4==0 and year%400==0 ---- Both are true as it is and condition
and 2024%100!=0 --- is not divisible this also true
as or condition suggest 2024 will be leap year 

2.lets take 2029 for both condition
if((year%4==0 && year%400==0) || year%100!=0);
in this both and condition will yeild false and it is not divisible by 100 which 
will make statement true and false or true yeild (true) i.e leap year but 2029 is not leap year

3.but with another expression if((year%4==0 && year%100!=0) || year%400 == 0);
which is actualy the corrected one will yeild false for and condition and for or condition
it is not divisible by 400 hence the another one is also false which tell the entry is not leap year
which is actually the corrected one.
*/


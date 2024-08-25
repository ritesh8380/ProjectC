#include <stdio.h>
int main() {
int a,b,c,d;
printf("chose any 4 numbers and I will tell you the largest among 4\n\n");
printf("chose 1st number\t");
scanf("%d", &a);
printf("chose 2nd number\t");
scanf("%d", &b);
printf("chose 3rd number\t");
scanf("%d", &c);
printf("chose 4th number\t");
scanf("%d", &d);

if(a>b && a>c && a>d){
printf("first number is greatest among four entries");
}
else if(b>a && b>c && b>d){
printf("second is greatest among four entries");
}

else if(c>a && c>b && c>d){
printf("Third is greatest among four entries");
}

else if(d>a && d>c && d>b){
printf("Fourth is greatest among four entries");
}

return 0;
}
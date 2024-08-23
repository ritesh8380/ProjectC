#include <stdio.h>
int main(){
  int income;
  float tax = 0;
  printf("what is your Income :  \n");
  scanf("%d", &income);
  if(income<=200000){
    tax = 0;
  }
  else if(income>=250000 && income<=5000000){
    tax = 0.05*(250000 - 200000);
  }
  else if(income>=500000 && income<=1000000){
    tax = 0.20*(500000-200000)+0.30*(1000000-200000);
  }
  else if(income>=1000000){
    tax = 0.50*(1000000-200000);
  }
  else{
    printf("Slab not found !");
  }
  printf("That much amount you have to pay as Income Tax  %.2f\n",tax);

return 0;
}
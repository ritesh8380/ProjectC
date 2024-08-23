#include <stdio.h>
int main(){
    int p,c,m,t,o,T;
    float percent;

    printf("Marks in PHYSICS : \t");
    scanf("%d", &p);
    printf("Out of How much :  \t");
    scanf("%d", &t);
    printf("Marks in CHEMISTRY : \t");
    scanf("%d", &c);
    printf("Out of How much :  \t");
    scanf("%d", &o);
    printf("Marks in MATHEMATICS :  \t");
    scanf("%d", &m);
    printf("Out of How much :  \t");
    scanf("%d", &T);
    
   percent = ((float)(p+c+m)/(t+o+T))*100;
   
   if(percent<=100 && percent>=60){
    printf("You Got [I division] \n");
   }
   else if(percent<=60 && percent>=40){
    printf("You Got [II] division \n");
   }
   else if(percent<=40 && percent>=20){
    printf("Your Grade [III] Division \n");
   }
   else { 
    printf("Sorry but you Have to learn More \n");
   }

  printf("result =  %.2f%% \n",percent);

return 0;
}

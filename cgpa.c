#include <stdio.h>
int main(){
    int cgpa[4]= {9,8,7,4};
    int error;
    printf("sr.no 1. Ritesh got %d cgpa\n",cgpa[0]);
    printf("sr.no 2. Madhu got %d cgpa\n",cgpa[1]);
    printf("sr.no 3. Avadh got %d cgpa\n",cgpa[2]);
    printf("sr.no 4. shailesh got %d cgpa\n",cgpa[3]);

    printf("Do you think there are errors in the data you can change them if no then just type 'no' !\n");
    printf("Tell me the no. errors : \t");
    scanf("%d",&error);
    
for (int inp = 1; inp <= error; inp++) { 
    int a;
    printf("if there is any discripency in the data you can change it through typing the student sr.no in the following list\n");
    printf("Serial number of student to modify data : \t");
    scanf("%d", &a);
    if(a > 4){
        printf("No such data found\n");
    }
    
    switch (a)
    {
    case 0 : printf("You have successfully escaped from the programme\n");
            break;
    case 1: printf("ok whats the correct cgpa of Ritesh\n");
            scanf("%d", &cgpa[0]);
            printf("Data changed and uploaded successfully to the college server THANKS for the correction have a nice day\n");
        break;
    case 2: printf("ok whats the correct cgpa of Madhu\n");
            scanf("%d", &cgpa[1]);
            printf("Data changed and uploaded successfully to the college server THANKS for the correction have a nice day\n");
        break;
    case 3: printf("ok whats the correct cgpa of Avadh\n");
            scanf("%d", &cgpa[2]);
            printf("Data changed and uploaded successfully to the college server THANKS for the correction have a nice day\n");
        break;
    case 4: printf("ok whats the correct cgpa of Shailesh\n");
            scanf("%d", &cgpa[3]);
            printf("Data changed and uploaded successfully to the college server THANKS for the correction have a nice day\n");
        break;
    default: if(inp > 5){ printf("sorry Student not registered please kindly visit our website to register the student !\n");}
        break;
    }
    }
    
    printf("updated details are as follows\n");

    printf("Ritesh got %d cgpa\n",cgpa[0]);
    printf("Madhu got %d cgpa\n",cgpa[1]);
    printf("Avadh got %d cgpa\n",cgpa[2]);
    printf("shailesh got %d cgpa\n",cgpa[3]);

return 0;
}
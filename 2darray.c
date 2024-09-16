#include <stdio.h>
int main()
{ int arr[3][2];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {  
            printf("Enter %d row of %d column\n",row,col);
            scanf("%d",&arr[row][col]);
        }
        
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {  
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
        
    }
    
return 0;
}
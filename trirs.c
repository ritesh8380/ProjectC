#include <stdio.h>
int main()
{
    int rows;
    printf("choose no. of rows of structure : \t");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int stars = 0; stars < 2 * i + 1; stars++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = rows; i > 0; i--)
    {
        for (int stars = 0; stars < 2 * i - 1; stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*explainaiton: suppose value of row is 4
then working takes place:
0.row(i) =  2*i+1
1.row(0) =  2*0+1 = prints 1 star at first iteration
2.row(1) =  2*1+1 = prints 3 star at second iteration
3.  .    =    .   = prints 5 star at third iteration
4.  .    =    .   = prints 7 star at fourth iteraion
5.  .    =    .   = prints 9 star at fifth iteration

so here we observed two loops running parallely where one loop is changging row and the other one printing star.
*/

/*learingi : i added the lower half of code also because it  is  curiosity so i will recommend to
think about decrement of stars which can only be acheived by changing fuction of your star printer */
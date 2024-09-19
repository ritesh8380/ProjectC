#include <stdio.h>
int print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
int rev_array(int a[], int n)
{
    for (int i = 0; i < n/2; i++) //when number is 1,2,3,4,5,6 then we just have to change 6,5,4 positions swap
    {
        int temp = a[i];          //a[ 6 - 0 - 1] i.e [5] which is 6 will get swap on the place of i = 0 i.e 1
        a[i] = a[n - i - 1];      //a[ 6 - 1 - 1] i.e [4] which is 5 will get swap on the place of i = 1 i.e 2
        a[n - i - 1] = temp;      //a[ 6 - 2 - 1] i.e [3] which is 4 will get swap on the place of i = 2 i.e 3
                                  //only 3 because loop is running in n/2.  
    }                             
}

int main()
{ 
    int a[] = {1,2,3,4,5,6};

    print_array(a,6);
    rev_array(a,6);
    print_array(a,6);

    return 0;
}
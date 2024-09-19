#include <stdio.h>
int no_positive = 0;
int count(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            no_positive++;
        }
    }
}
int main()
{
    int a[] = {-1, -2,-3, -4, -5, -6, -7, -8, -9, 10};
    count(a, 10);
    printf("The number of negative integers into the array is %d\n",no_positive);

    return 0;
}
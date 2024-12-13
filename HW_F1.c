#include <stdio.h>
#include <stdlib.h>
/*
void sort_array(int size, int a[])
{
    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for(int j= i + 1; j<size; j++)
        {
            if(a[j] < a[min])
                min=j;
        }
        if(min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    //for (int i = 0; i < size; i++)
     //   printf("%d ", a[i]);
}
*/
void sort_array (int size, int a[] ) {
   for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int size=10, a[10];

    for(int i=0; i<size; i++)
    {
       scanf("%d", &a[i]);
    }
    size= sizeof(a) / sizeof(a[0]);
    sort_array(size, &a[0]);
    return 0;
}

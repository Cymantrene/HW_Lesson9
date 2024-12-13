#include <stdio.h>
#include <stdlib.h>

void sort_even_odd(int size, int a[])
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            temp = a[j];
            if (temp % 2 != 0 && a[j + 1] % 2 == 0)
            {
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/*
void sort_even_odd(int n, int a[])
{
    int i, j, temp;

    for ( i = 0; i < n; i++ )
    {
        if ( a[i] % 2 != 0 )
        {
            for ( j = i; j < n; j++ )
            {
                if ( a[j] % 2 == 0 )
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
}
*/


/*
void sort_even_odd(int array[], int size) {
    int i, j, temp;

    for ( i = 0, j = size - 1; i < j; )
    {
        if ( array[i] % 2 != 0 && array[j] % 2 == 0 )
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        if ( array[i] % 2 == 0 ) {
            i += 1;
        }
        if ( array[j] % 2 != 0 ) {
            j -= 1;
        }
    }


}
*/
/*
void sort_even_odd(int n, int a[])
{
    int result[n];

    int start = 0;
    int end = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            result[start] = i;
            start++;
        }
        else if (a[i] % 2 == 1)
        {
            result[end] = i;
            end--;
        }

    }


}
*/


int main()
{
    while(1);
    return 0;
}

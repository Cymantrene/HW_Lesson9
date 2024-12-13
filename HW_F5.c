#include <stdio.h>
#define SIZE 1000

int  find_max_array(int n, int *arr)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        {

            if (arr[i] > max)
            max = arr[i];
            if (arr[i]== '.')  break;
        }

    return max;
}

int main()
{
     int arr[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
	scanf("%d", &arr[i]);
    int n = sizeof(arr) / sizeof(arr[0]);

printf("%d ", find_max_array(n, arr));
    return 0;
}

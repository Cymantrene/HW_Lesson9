#include <stdio.h>
#define SIZE 30

int main()
{
    int arr[SIZE];
    int i, min1, min2, temp;

      for (int i = 0 ; i <SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (arr[0] < arr[1])
    {
        min1 = 0;
        min2 = 1;
    }
    else
    {
        min1 = 1;
        min2 = 0;
    }

    for (i=2; i< SIZE; i++)
    {
        if (arr[i] < arr[min1])
        {
            temp = min1;
            min1 = i;
            if (arr[temp] < arr[min2]) min2 = temp;
        }
        else
        {
            if (arr[i] < arr[min2]) min2 = i;
        }
    }

    printf("%d %d", min1, min2);


    return 0;

}

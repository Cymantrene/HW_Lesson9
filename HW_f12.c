#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
void change_max_min(int size, int arr[])
{
    int max, min, i_min, i_max;
     min = max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            i_min = i;
        } else if(max < arr[i])
        {
            max = arr[i];
            i_max = i;
        }

    }
        arr[i_min] = max;
        arr[i_max] = min;
 /*
    for(int i = 0; i < size; i++)
    {

          printf("%d ", arr[i]);

    }
*/
}

int main()
{
    int buff[100],i=0;
    char c=' ';
    while(c!='\n')
    {
        scanf("%d%c",&buff[i++], &c);
    }
    change_max_min(i, buff);

    return 0;
}

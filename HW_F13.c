#include <stdio.h>

 int count_between(int x, int y, int n, int arr[])

 {
     int count = 0;
     for (int i = 0; i < n; i++)
        {

         if (arr[i] >= x && arr[i] <= y)
             count++;
     }
     return count;
 }

int main ()
{
    while(1);
    return 0;
}

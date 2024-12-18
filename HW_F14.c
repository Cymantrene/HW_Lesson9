#include <stdio.h>

 int sum_between_ab(int x, int y, int n, int arr[])

 {
     int sum = 0;
     for (int i = 0; i < n; i++)
        {

         if ((arr[i] >= x && arr[i] <= y) || (arr[i] <= x && arr[i] >= y) ) sum += arr[i];


     }
     return sum;
 }

int main ()
{
    while(1);
    return 0;
}

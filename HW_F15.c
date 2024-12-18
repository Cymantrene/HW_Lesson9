#include <stdio.h>
#include <math.h>





int count_bigger_abs(int n, int a[])
{
    int i=0, count=0;
    int max = -2147483648;
    for (i=0; i < n; i++)
        {
            if (a[i] > max) max = a[i];
        }
    count = 0;
    for (i=0; i < n; i++)
        if (abs(a[i]) > max) count += 1;

    return count;

}

int main()
{
 //while(1);

    return 0;
}

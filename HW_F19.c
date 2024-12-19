#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int N=5,i,j;
    int   x[5][5];


   for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            scanf ("%d", &x[i][j]);
        }

        int s = 0;
    int p = 1;
    for(int i=0;i<N;i++){
        s += x[i][i];
        p *= x[i][N-1-i];
    }
    s /= N;
//printf("%d ", s);


    int count = 0;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
           if(x[i][j]>s)
            {

                count++;
            }
        }
    }


    printf("%d \n", count);

}

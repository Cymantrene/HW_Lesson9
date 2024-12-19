#include <stdio.h>
#include <stdlib.h>

#define N 5

void sled(int arr[][N], int size)
{
    int sled = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                sled += *(*(arr + i) + j);
        }
    }
    printf("%d", sled);
}
/*
int main()
{


    int matrix[5][5] = { { 1, 1, 1, 1, 1 },
                       { 2, 2, 2, 2, 2 },
                       { 3, 3, 3, 3, 3 },
                       { 4, 4, 4, 4, 4 },
                       { 5, 5, 5, 5, 5 } };



    int size= sizeof(matrix)/sizeof(matrix[0]);
    sled(matrix, 5);
    return 0;
}

*/

int main()
{
    int m,n; //,o;
    int i=0, j=0;
    int  cmd; //[4];
    //printf("Vvod kol-va strok n=");
    //scanf("%d",&n);
    //printf("Vvod kol-va stolbov m=");
    //scanf("%d",&m);
    int matrix[5][5];
    //float b[n][m];
    for (i = 0; i < 5; i++)  //n
        {for (j = 0; j < 5; j++) //m
            scanf ("%d", &matrix[i][j]);}

    //printf("Vvod komandy\n");
    //scanf("%d", &cmd);
    //if (cmd==1)
   /*
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf ("%.2f ", b[i][j]);
            printf ("\n");
        }
    */
    sled(matrix, 5);
    return 0;
}

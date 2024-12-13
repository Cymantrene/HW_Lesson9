#include <stdio.h>
#define SIZE 100
int compression(int input[],  int output[], int n )
{
    int count = 1;
    int outSize = 0;

 for (int i = 1; i < n; i++)
 {
    if (input[i] == input[i - 1])
    {
        count++;
    }
    else
    {
        output[outSize] = count;
        outSize++;
        count = 1;
    }
 }

    output[outSize] = count;
    outSize++;

    if (input[0] == 1)
    {

        for (int i = outSize; i > 0; i--)
        {
            output[i] = output[i - 1];
        }
            output[0] = 0;

            outSize++;
    }
    return outSize;
}

int main()
{
    //int *outSize;
int inputArray1[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
	scanf("%d", &inputArray1[i]);

int outputArray[100];



int temp = compression(inputArray1, outputArray, sizeof(inputArray1) / sizeof(inputArray1[0]) );
printf("WINRAR: [");

for (int i = 0; i < temp; i++)
{
    printf("%d ", outputArray[i]);
    if (i < temp - 1) printf(",");
}
    printf("]\n");



return 0;
}


/*
void compression(int input[], int n, int output[], int *outSize)
{
    int count = 1;
    *outSize = 0;

 for (int i = 1; i < n; i++)
 {
    if (input[i] == input[i - 1])
    {
        count++;
    }
    else
    {

        output[*outSize] = count;
        (*outSize)++;
        count = 1;
    }
 }

    output[*outSize] = count;
    (*outSize)++;


    if (input[0] == 1)
    {
        for (int i = *outSize; i > 0; i--)
        {
            output[i] = output[i - 1];
        }
            output[0] = 0;
            (*outSize)++;
    }
}
*/

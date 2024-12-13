#include <stdio.h>

#define SIZE 1000



void NumSymbols(int len, char *buf)
{
int symbols[len], count[len];
int countSymbol = 1;
int numCount = 0; //переделать в ASCII
int i;
    for( i = 0; i < len-1; i++)
{
        if(buf[i] == buf[i + 1])
            countSymbol++;
        else
        {
            symbols[numCount] = buf[i];
            count[numCount++] = countSymbol;
            countSymbol = 1;
        }
}
    symbols[numCount] = buf[i];
    count[numCount++] = countSymbol;

        for (int j = 0; j < numCount; j++)
        printf("%c%d", symbols[j], count[j]);


}

int main()
{
char	buf[SIZE];
int 	 i=0;

    for(i=0; i<SIZE; i++)
    {
        scanf("%c", &buf[i]);
        if (buf[i] == '.')
         break;
    }

NumSymbols(i,buf);




    return 0;
}


#include <stdio.h>
#include <stdlib.h>


#include <math.h>

int main()
{
    int b;
    char a;
    scanf("%c%d",&a,&b);
    if (((a=='A')||(a=='C')||(a=='E')||(a=='G'))&&(b%2!=0)) printf("BLACK");
    else if (((a=='B')||(a=='D')||(a=='F')||(a=='H'))&&(b%2==0)) printf("BLACK");
    else printf("WHITE");


    return 0;
}

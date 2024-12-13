#include <stdio.h>

int is_two_same(int size, int a[])
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (a[i] == a[j+1])
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    while(1);
    return 0;
}

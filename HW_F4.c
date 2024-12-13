#include <stdio.h>
#include <string.h>
void print_digit(char stroka[])
{
    int numberCountArr[10] = {0};
      for(int i = 0; i < strlen(stroka); i++)
  {
    if ((stroka[i] >= '0') && (stroka[i] <= '9'))
    {
      numberCountArr[stroka[i] - '0']++;
    }
  }

  for(int i = 0; i < 10; i++)
  {
    if (numberCountArr[i])
    {
      printf("%d %d\n", i, numberCountArr[i]);
    }
  }
}
int main(void)
{
  char stroka[256];
  gets(stroka);
  print_digit(stroka);
  return 0;
}

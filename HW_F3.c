#include <stdio.h>
#define SIZESYMBOL 1000
#define RAZMERDEC 10



int main ()
{

  char symbols[SIZESYMBOL]={0};
  int dec[RAZMERDEC] = { 0 };
  scanf ("%s", symbols);

  for (int i = 0; symbols[i]; i++)
    {
      dec[symbols[i] - 0x30] = dec[symbols[i] - 0x30] + 1;
    }
  for (int i = 0; i < RAZMERDEC; i++)
    {
      if (dec[i])
        printf ("%d %d\n", i, dec[i]);
    }
  return 0;
}

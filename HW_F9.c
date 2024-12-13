#include <stdio.h>
void swap_negmax_last(int razmer, int arr[])
{
    int    index = -1, temp, test_neg=0;

for (int i=0; i< razmer; i++)
{
    if(arr[i] > 0) test_neg +=1;
}
    if(test_neg == razmer) return;
  for (int i=0; i< razmer; i++)
    {
    if (arr[i] < 0 && index == -1)
      index = i;
    else
      if (arr[i] < 0 && arr[i] > arr[index])
        index = i;
    }
    temp = arr[razmer-1];
    arr[razmer-1] = arr[index];
    arr[index] = temp;
}

int  main()
{
    int arr[100]={0}, razmer;

    scanf("%d",&razmer);
    for (int i=0; i < razmer; i++)
    {
        scanf("%d", &arr[i]);
    }

  swap_negmax_last( razmer, arr);



  return 0;
}

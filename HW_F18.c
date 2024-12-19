#include <stdio.h>



int main(){

    int N=10, M=10, s;
   // scanf("%d" , &N);scanf("%d" , &M);
    int Sum=0;      //Первоначально сумма равна нулю

    int arr[N][M];  //Массив входной

    int i, j;
        int mas[N]; //Массив максимальных элементов
    for ( i = 0; i < N; i++ )
    {
            s=-9999999;//Минимальный элемент матрицы не меньше этого числа!
        for ( j = 0; j < M; j++ )
            {
                scanf("%d", &arr[i][j]);
                if (arr[i][j]>s) s=arr[i][j];//Поиск MAX в строке
            }
        mas[i]=s;
    }
    for ( i = 0; i < N; i++ )

    Sum=Sum+mas[i]; //Суммируем максимальные элементы

        printf("%d ", Sum);

    return 0;

}

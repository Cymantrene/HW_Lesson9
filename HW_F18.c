#include <stdio.h>



int main(){

    int N=10, M=10, s;
   // scanf("%d" , &N);scanf("%d" , &M);
    int Sum=0;      //������������� ����� ����� ����

    int arr[N][M];  //������ �������

    int i, j;
        int mas[N]; //������ ������������ ���������
    for ( i = 0; i < N; i++ )
    {
            s=-9999999;//����������� ������� ������� �� ������ ����� �����!
        for ( j = 0; j < M; j++ )
            {
                scanf("%d", &arr[i][j]);
                if (arr[i][j]>s) s=arr[i][j];//����� MAX � ������
            }
        mas[i]=s;
    }
    for ( i = 0; i < N; i++ )

    Sum=Sum+mas[i]; //��������� ������������ ��������

        printf("%d ", Sum);

    return 0;

}

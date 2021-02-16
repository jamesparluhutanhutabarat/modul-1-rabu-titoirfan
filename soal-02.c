/*EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*Modul            : 1
*Percobaan        : -
*Hari dan Tanggal : Selasa, 9 Februari 2021
*Nama (NIM)       : -
*Asisten (NIM)    : Elang Aditya Rahman
*Nama File        : -
*Deskripsi        : Menghitung luas poligon dengan sisi N
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x[20], y[20];
    int N;

    printf("Masukkan jumlah titik pada poligon: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Masukkan nilai x%d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Masukkan nilai y%d: ", i + 1);
        scanf("%d", &y[i]);
        // printf("%d, %d\n", x[i], y[i]);
    }

    printf("\n");

    float area = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == N - 1)
        {
            area += x[i] * y[0] - y[i] * x[0];
        }
        else
        {
            area += x[i] * y[i + 1] - y[i] * x[i + 1];
        }
        // printf("%f\n", area);
    }

    area = fabs(area / 2);
    printf("Area = %.2f", area);
}

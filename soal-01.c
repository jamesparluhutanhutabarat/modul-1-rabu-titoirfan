/*EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*Modul            : 1
*Percobaan        : -
*Hari dan Tanggal : Minggu, 7 Februari 2021
*Nama (NIM)       : -
*Asisten (NIM)    : Dismas Widyanto (13218065)
*Nama File        : -
*Deskripsi        : Menghitung bilangan ganjil pada deret Fibonacci
*/

#include <stdio.h>

int main(){
    //Kamus
    int i, N, current=1, before=0, count=1;

    //input
    printf("Masukkan Panjang Deret: ");
    scanf("%d",&N);

    //Array Deret
    int deret[N];

    if(N==0){
        //output
        printf("Banyak Bilangan Ganjil: 0\n");
        printf("Deret: \nTidak Ada");
    }
    else{
        //Buat Deret dan hitung banyak bilangan ganjil
        deret[0]=current;
        for(i=1;i<N;i++){
            deret[i]=current+before;
            if(deret[i]%2==1){
                count+=1;
            }
            before=current;
            current=deret[i];
        }

        //output
        printf("Banyak Bilangan Ganjil: %d\n",count);
        printf("Deret: \n");
        for(i=0;i<N;i++){
            printf("%d ",deret[i]);
        }
    }
    return 0;
}

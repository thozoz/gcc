#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

srand(time(NULL)); //rastgele sayı seçme hazırlıkları
int tahmin=0; //kullanıcının yazdığı sayının depolancağı değişkeni oluşturma
int gizli = 1 + rand() % 101; //1-100 arası rastgele sayı seçip gizli değişkenine atama

// printf("Gizli: %d\n", gizli);

for (int i = 1; i <= 5; i++) { //5 defa tahmin etme kodunu çalıştırma

printf("%d. tahmin hakki\n",i);
scanf("%d",&tahmin); //kullanıcının tahminini klavyeden alıp "tahmin" değişkenine atama

if(tahmin==gizli) { //kullanıcı tahmini gizli sayıysa 
printf("Tebrikler, dogru tahmin!\n"); //gizli sayıyı bildiğini yazdırma
return 0;
} 
else if (tahmin>gizli) printf("Daha kucuk bir sayi giriniz!\n"); //kullanıcı tahmini gizli sayıdan büyükse 
else if(tahmin<gizli) printf("Daha buyuk bir sayi giriniz!\n"); //kullanıcı tahmini gizli sayıdan küçükse

}

printf("Tahmin hakkiniz bitti. Dogru sayi: %d\n", gizli); //Döngüdeki i, 5 sayısına eşitlenince 5 defa denemiş oluyor. Döngü bitiyor ve kullanıcı gizli sayıyı bilemiyor
return 0;
}
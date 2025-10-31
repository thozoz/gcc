#include <stdio.h>

int main() {
     
int sayi, buyuk, buyuk2, kucuk; //değişkenleri alma
printf("1. sayiyi giriniz: ");
scanf("%d", &sayi); //klavyeden değer alma
buyuk = sayi;
buyuk2 = sayi; //ilk sayıları atarız ki karşılaştırmayı doğru yapsın
kucuk = sayi; 

for (int i = 2; i <= 10; i++) {
    printf("%d. sayiyi giriniz:", i);
    scanf("%d", &sayi);
    if(sayi>buyuk) {buyuk2=buyuk; buyuk=sayi;} //sayi değişkeni buyuk değişkeninden büyükse buyuk değişkenindeki sayı buyuk2 ye atanıp 2. en büyük sayı olur, girdiğimiz sayı da en büyük sayı olur
    else if(sayi>buyuk2) buyuk2=sayi; //sayi 2. en büyük sayıdan büyükse 2. en büyük sayı olur
    else if(sayi<kucuk) kucuk=sayi; //sayi en küçük sayıdan küçükse en küçük sayı olur
}
//cevapları yazdırma
printf("\nCevaplar:\n");
printf("En buyuk: %d\n", buyuk);
printf("2. En buyuk: %d\n", buyuk2);
printf("En kucuk: %d\n", kucuk);

return 0;

}
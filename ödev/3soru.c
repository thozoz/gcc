#include <stdio.h>

int main() {
     
int sayi, buyuk, buyuk2, kucuk; 
printf("1. sayiyi giriniz: ");
scanf("%d", &sayi);
buyuk = sayi;
buyuk2 = sayi;
kucuk = sayi;

for (int i = 2; i <= 10; i++) {
    printf("%d. sayiyi giriniz:", i);
    scanf("%d", &sayi);
    if(sayi>buyuk) {buyuk2=buyuk; buyuk=sayi;}
    else if(sayi>buyuk2) buyuk2=sayi;
    else if(sayi<kucuk) kucuk=sayi;
}
printf("\nCevaplar:\n");
printf("En buyuk: %d\n", buyuk);
printf("2. En buyuk: %d\n", buyuk2);
printf("En kucuk: %d\n", kucuk);

return 0;

}
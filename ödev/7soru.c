#include <stdio.h>

int main(){

for (int i = 1; i <= 25; i++) { //Dikey olarak 25 satırı yapan döngü
    for (int k = 1; k <= 25-i; k++) { //i sayısıyla ters olarak boşluk koyma döngüsü
    printf(" "); //25den kaçıncı satır olduğunu çıkarıp o kadar boşluk koyma (ilk satır, 1 yıldız, 24 tane sola boşluk)
    }
    for (int j = 1; j <= i; j++) { //Yıldızlarda sol ve merkez yıldızları koyan kısım
    printf("*");
    }
    for (int t = 1; t <= i-1; t++) { //Merkezin sağındaki yıldızları koyan kısım. -1 yapmayınca her satırda fazladan 1 yıldız oluyor. Ondan i değişkeninden 1 çıkarıyoruz
    printf("*");        
    }
printf("\n");
}

return 0;
}
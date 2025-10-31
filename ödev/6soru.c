#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

srand(time(NULL));
int tahmin=0;
int gizli = 1 + rand() % 101;

// printf("Gizli: %d\n", gizli);

for (int i = 1; i <= 5; i++) {

printf("%d. tahmin hakki\n",i);
scanf("%d",&tahmin);

if(tahmin==gizli) {
printf("Tebrikler, dogru tahmin!\n");
return 0;
} 
else if (tahmin>gizli) printf("Daha kucuk bir sayi giriniz!\n");
else if(tahmin<gizli) printf("Daha buyuk bir sayi giriniz!\n");

}

printf("Tahmin hakkiniz bitti. Dogru sayi: %d\n", gizli);
return 0;
}
#include <stdio.h>

int main() {
int i, j, k; //i,j,k değişkenleri oluşturulur.

/* Kod i=0, j=2, k=1 olarak başlar
   i<=4 olduğu sürece tekrarlar
   Her döngüde i değişkeni 1 artar 
   İlk printf yazılır, sonra i 1 artar, sonra tekrar printf yazılır ve bu döngü i<=4 olana kadar devam eder
   Yani printf 5 defa çalışır.
*/
for (i = 0, j = 2, k = 1; i <= 4; i++) {
    printf("%d\n", i + j + k);
}

return 0;

/* Çıktısı:

3
4
5
6
7

olur */
}
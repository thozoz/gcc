#include <stdio.h>
int main()
{

float kilo, boy, BKI; //değişkenlerin atanması

printf("Ilk kilonuzu (kg cinsinden), sonra boyunuzu (metre cinsinden) giriniz.\n");
scanf("%f %f", &kilo,&boy); //kilo ve boyu klavyeden alırız (formül gereği kilogram ve metre olarak alınmalı)

BKI=kilo/(boy*boy); //BKI hesabı yapma 
printf("BKI=%0.3f\n", BKI); //BKI yazdırma

//BKI ya göre uygun sonucu yazdırma
if (BKI < 18.5) printf("Zayif\n");
else if (BKI < 25) printf("Normal\n");
else if (BKI < 30) printf("Fazla kilolu\n");
else if (BKI < 35) printf("I. derece obez\n");
else if (BKI < 40) printf("II. derece obez\n");
else if (BKI >= 40) printf("III. derece morbid obez\n"); 

return 0;

}

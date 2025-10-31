#include <stdio.h>
int main()
{

float kilo, boy;
float BKI;
printf("Ilk kilonuzu (kg cinsinden), sonra boyunuzu (metre cinsinden) giriniz.\n");
scanf("%f %f", &kilo,&boy);

BKI=kilo/(boy*boy);
printf("BKI=%0.3f\n", BKI);

if (BKI < 18.5) printf("Zayif\n");
else if (BKI < 25) printf("Normal\n");
else if (BKI < 30) printf("Fazla kilolu\n");
else if (BKI < 35) printf("I. derece obez\n");
else if (BKI < 40) printf("II. derece obez\n");
else if (BKI >= 40) printf("III. derece morbid obez\n"); 

return 0;

}

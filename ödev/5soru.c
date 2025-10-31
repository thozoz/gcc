#include <stdio.h>

int main() {

char harf;
scanf("%c", &harf);

switch (harf)
{

case 'a':
    printf("Sesli harf!");
break;

case 'e':
    printf("Sesli harf!");
break;

case 'u':
    printf("Sesli harf!");
break;

case 'ü':
    printf("Sesli harf!");
break;

case 'o':
    printf("Sesli harf!");
break;

case 'ö':
    printf("Sesli harf!");
break;

case 'i':
    printf("Sesli harf!");
break;

case 'ı':
    printf("Sesli harf!");
break;

default:
    printf("Sessiz harf!");
break;
}

return 0;

}
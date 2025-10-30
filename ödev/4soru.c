#include <stdio.h>

int main() {
//değişkenler
    float say1, say2;
    char simge;
//1. sayıyı klavyeden alma
    printf("1. sayıyı giriniz: ");
    scanf("%f", &say1);
//Matematik işaretini klavyeden alma
    printf("Simge giriniz: (+,-,*)\n");
    scanf(" %c", &simge);
//2. sayıyı klavyeden alma
    printf("2. sayıyı giriniz: ");
    scanf("%f",&say2);

//İşarete göre hesabı yapma
    switch (simge) {
    case '+':
        printf("%0.3f + %0.3f = %0.3f\n", say1, say2, say1 + say2);
        break;

    case '-':
        printf("%0.3f - %0.3f = %0.3f\n", say1, say2, say1 - say2);
        break;

    case '*':
        printf("%0.3f * %0.3f = %0.3f\n", say1, say2, say1 * say2);
        break;
    default:
        printf("Lütfen (+,-,*) birini giriniz.\n");
    }
  
    return 0;
}
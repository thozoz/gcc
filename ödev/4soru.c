#include <stdio.h>

int main(){

int gec=1; //döngü için değer
int yil=0; //kaç yıl geçtiğini tutacak değer
float para=70000; //paranın değeri
while(gec){

if(para<150000){  //para hedeflenen 150000tlden azsa faiz hesaplamaya geçirtme

para=(para*1134/1000); //faizi ekleme
// printf("Para suanda %0.3f\n",para);
yil+=1; //yılı arttırma

}

else { //para, hedeflenen 150000tlyi geçti, döngüyü durduracak

printf("Parayi asti! Yil: %d\n",yil+2025); //Kaç yılda aştığını yazdırır
gec=0; //gec değişkeni 0 yapılır ki while döngüsü dursun ve kod dursun

}
}

return 0;
}
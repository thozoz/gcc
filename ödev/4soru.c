#include <stdio.h>

int main(){

int gec=1;
int yil=0;
float para=70000;
while(gec){

if(para<150000){ 

para=(para*1134/1000);
// printf("Para suanda %0.3f\n",para);
yil+=1;

}

else {

printf("Parayi asti! Yil: %d\n",yil+2025);
gec=0;

}
}

return 0;
}
#include <stdio.h>

int main(){



for (int i = 1; i <= 25; i++) {
    for (int k = 1; k <= 25-i; k++) {
    printf(" ");        
    }
    for (int j = 1; j <= i; j++) {
    printf("*");
    }
    for (int t = 1; t <= i-1; t++) {
    printf("*");        
    }
printf("\n");
}

return 0;
}
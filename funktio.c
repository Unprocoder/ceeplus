#include <stdio.h>

float jakaja(float n){
    return n / 2;
}

int main(void){
    int jaettava_luku;
    float tulos;

    printf("Anna jaettava luku: \n");
    scanf("%d", &jaettava_luku);

    tulos = jakaja(jaettava_luku);

    printf("%d jaettuna 2 on %f\n", jaettava_luku, tulos);
}

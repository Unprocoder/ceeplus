#include <stdio.h>

int tarkistaja(int luku){
    int i = 2;
    while (i < luku){
        if (luku % i == 0){
            printf("Luku %d ei ole alkuluku!", luku);
            break;
        } else{
            i++;
        }
    }
    if (i == luku){
        printf("Luku %d on alkuluku!", luku);
    }
}

int main(void){
    int luku;

    printf("Anna luku: ");
    scanf("%d", &luku);

    tarkistaja(luku);
}
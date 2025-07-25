#include <stdio.h>

//Aliohjelma luvun tarkistamiseksi
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
int laskuri(int luku){
    int i = 2;
    int x = 2;
    
    
}



int main(void){
    int luku;
    char input[100];

    printf("Anna luku: ");

    // Syötteen tarkistaminen, ei hyväkysy muuta kuin numeroita
    while(fgets(input, sizeof(input), stdin)){
        if (sscanf(input, "%d", &luku) == 1){
            break;
        }
        else{
            printf("Invaliidi inputti. Anna luku!\n");
        }
    }

    tarkistaja(luku);
}
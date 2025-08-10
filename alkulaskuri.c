#include <stdio.h>

//Aliohjelma luvun tarkistamiseksi
int tarkistaja(int luku){
    int i = 2;
    while (i < luku){
        if (luku % i == 0){
            printf("Luku %d ei ole alkuluku!", luku);
            return 0;
        } else{
            i++;
        }
    }
    printf("Luku %d on alkuluku!", luku);
}

// While luupin kokeilua
int loopperi(int luku){
    int i = 1;
    int x = 1;
    
    while (x <= luku){
        printf("%d: ", x);
        while (i <= luku){
            printf("%d ", i);
            i++;
        }
        printf("\n");
        i = 1;
        x++;
    }
}

int megalaskuri(int n){
    if (n <= 1) return 0;

    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
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

    for (int i = 2; i <= luku; i++) {
    if (megalaskuri(i)) {
        printf("%d\n", i);
    }
    }
}
#include <stdio.h>

void summa(int x, int y, int *summa){
    *summa = x + y;
}

void erotus(int x, int y, int *erotus){
    *erotus = x - y;
}

void jako (int x, int y, int *jako){
    if (y != 0){
        *jako = x / y;    
    }
}

void kerto(int x, int y, int *kerto){
    *kerto = x * y;
}

int main(void){
    printf("Kerro operaattori (+ - / *): ");

    //null terminator
    char operaattori = '\0';
    //hasta la vista... baby
    int x, y, s, e, j, k;
    
    summa(x, y, &s);
    erotus(x,y, &e);
    jako (x, y, &j);
    kerto (x, y, &k);
    
    scanf("%c", &operaattori);

    printf("Anna luvut: ");
    scanf("%d", &x);
    scanf("%d", &y);

    switch (operaattori){
        case '+':
            summa(x, y, &s);
            printf("Tulos on: %d", s);
            break;
        
        case '-':
            erotus(x,y, &e);
            printf("Tulos on: %d", e);
            break;

        case '/':
            if (y != 0){
                jako(x, y, &j);
                printf("Tulos on: %d", j);
            } else{
                printf("Tuhma poika yritti jakaa nollalla");
            }
            break;

        case '*':
            kerto (x, y, &k);
            printf("Tulos on: %d", k);
            break;

        default:
            printf("Kikkuliskakkulis\n");
            break;
    }

    return 0;
}
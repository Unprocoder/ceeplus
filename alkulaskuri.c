#include <stdio.h>

//function declaration
int laskuri(int luku, int tulos);

int main(){
    laskuri();

    return 0;
}

//function definition
int laskuri(int luku, int tulos){
    tulos = luku % 2;

    printf("Gibe luku: \n");
    scanf("%d", &luku);
    
    if(tulos %= 0){
        printf("Luku %d on parillinen!", luku);
    } else{
        printf("Luku %d on pariton :/", luku);
    }
   return luku;
}

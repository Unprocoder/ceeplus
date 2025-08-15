#include <stdio.h>

int increment(int a){
    a++;
}

void pointerer(int *p)
{
    *p = *p + 1;
}

struct lihapiirakka{
    char *nimi;
    float hinta;
    char *tautteet;
};

int main(void){
    int i = 10, j;
    int *p = &i;

    increment(i);

    j = increment(i);

    pointerer(p);

    printf("i == %d\nj == %d\np == %d\n", i, j, *p);

    printf("\n\n");
    

    /*-------------------------------------LIHAPIIRAKKA--------------------------------------*/

    struct lihapiirakka lihis = {.nimi = "Nakkilihapiirakka", .hinta = 3.50, .tautteet = "Kaikilla mausteilla"};

    printf("Nimi:        %s\n", lihis.nimi);
    printf("Hinta:       %.2f €\n", lihis.hinta);
    printf("Täytteet:    %s\n", lihis.tautteet);
    
    
    return 0;
}
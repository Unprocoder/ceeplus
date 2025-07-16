#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    printf("Hello world!\n\n");

    int i = 13;
    float f = 3.14;
    char c = 'x';
    char *s = "Hello world again!";

    // %d prints out integer
    // %f prints out float
    // %c prints out a character 
    // %s prints out a string

    printf("Variable number is: %d\n float is: %f\n char is: %c\n and char pointer is: %s\n\n", i, f, c, s);

    for (int counter = 0; counter < 10; counter ++){
      printf("%d\n", counter);
    }

    int x = 1;

    if (x){
      printf("X is true!\n");
    }
   
    bool b = true;
    
    if (b){
      printf("b is true also!\n");
    }

    int a = 1000;

    // sizeof kertoo vaaditun muistin tavuina
    printf("Systeemiltäsi varastetaan → %zu tavua\n", sizeof a);

    return 0;
}
// LC 7th My Family Loop
#include <stdio.h>

int main(void){
    char *family[4] = { 
        "Kellee(Mom)",
        "Clay(Dad)" ,
        "Keylee(Sistor)", 
        "Lindon(Me)"
    };
    for (int i = 0; i < 4; i++) {
        printf("Hello Family Member %d: %s\n", i + 1, family[i]);
    }
    return 0;
}
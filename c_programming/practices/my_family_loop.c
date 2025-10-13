// LC 7th My Family Loop
#include <stdio.h>

int main(void){
    char family[4][20] = {"Kellee(Mom)", "Clay(Dad)", "Keylee(Sistor)", "Lindon(Me)",};
    for(int i = 0; i < 4; i++){
        printf("Hello %s\n", family[i]);
    }
    return 0;
}
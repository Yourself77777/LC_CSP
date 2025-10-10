// LC 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){

    char object;
    char color;
    char shiny_object;
    printf("Name a object: \n");
    scanf("%s\n", object);

    printf("Name a color: \n");
    scanf("%s\n", color);

    printf("Name a object: \n");
    scanf("%s\n", shiny_object);

    printf("The %s had %s that was as bright as the %s.", object, color, shiny_object);
    return 0;
}
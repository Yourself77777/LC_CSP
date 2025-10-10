// LC 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){

    char object [20];
    printf("Give me a object: ");
    scanf("%s", object);
    char object1 [50];
    strcat(object1, object);
    printf("%s it is\n", object1);


    char color[20];
    printf("give me a color: \n");
    scanf("%s", color);
    char color1[50];
    strcat(color1, color);
    printf("%s it is \n", color1);

    char shiny_object[20];
    printf("Give me a shiny object: \n");
    scanf("%s\n", shiny_object);
    char shiny_object1[50];
    strcat(shiny_object1, shiny_object);
    printf("The %s had a mind of its own when it turned %s then it flew into the sky and was a bright as a %s", object, color, shiny_object);

    printf("The %s had a mind of its own when it turned %s then it flew into the sky and was a bright as a %s", object, color, shiny_object);
    return 0;
}
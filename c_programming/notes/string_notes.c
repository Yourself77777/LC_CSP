// LC 7th String notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Andrew";

    char last_name[25];
    printf("Tell my your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c\n", last_name[0]);

    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("Your name is %s %s\n", name, last_name);
    printf("%zu\n", strlen(name));
    printf("%zu", sizeof(name));


    return 0;
}

//What is the difference between a string and a character?
// a string is more charectors
//What types of quotation marks do we need for a string?
//double
//What library do we need to include to access the string functions in C?
//#include <string.h>
//List functions the library allows us to use.
// strcat %zu
//How do we concatenate strings in C?
// strcat()
//How do we get individual characters from a string in C?//

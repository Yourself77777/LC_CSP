// LC 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("What is your name: ");
    scanf("%s", name);
    char full_name[50];
    strcat(full_name, name);
    printf("<<<%s>>>\n", full_name);

    
    return 0;
}
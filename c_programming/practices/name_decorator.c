// LC 7th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){

    char name[30];
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("<<<%s>>>\n", full_name);
    
    return 0;
}
// LC 7th Old Enough
#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("how old are you: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Go vote");
    }else if(age >= 16){
        printf("Go drive without an adult\n");
    }else if(age >= 15){
        printf("Go get a learner permit\n");
    }else{
        printf("Go to school\n");
    }
    return 0;
}
// LC 7th Conditional Notes
#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    int name[50];
    printf("What is you grade percent: ");
    scanf("%d", &grade);

    printf("What is you name: ");
    scanf("%s", &name);

    //printf("%d\n", strcmp(name, "Ms.LaRose"))
    if(strcmp(name, "Ms.LaRose") == 0){
        printf("You don't get a grade!\n");
    }else if(grade >= 90){
        printf("You have an A\n");
    }else if(grade >= 80){
        printf("You have an B\n");
    }else if(grade >= 70){
        printf("You have an C\n");
    }else{
        printf("You are failing :(\n");
    }
    return 0;
}


//What puts something inside of the “if” statement?
// The culrly prackets like this {}

//How are conditions written in C?
// they are three ways
// if
// else if
// else

//How do we write elif conditions in C?
// else if

//When do else conditions run?
// if everything before them is false

//What are the 3 logical operators in C?
//and / &&
// or / ||
// not / !
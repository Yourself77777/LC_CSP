// LC 7th Loop Notes
#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; // Arrays
    char candies[5][20] = {"Keitkat", "Skittles", "Nerds", "Hershies", "Reese's"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }


    return 0;
}

//What is a loop? 
// sets of code that repeat what is in it

//What are the two types of loops?
// for and while

//What is iteration
// iteratrion is just one instance in a loop

//What are arrays? 
// they are what everyone calls lists except python

//How do you make lists in C? 
// Example
// int nums[] = {35,6,546,346,2346,};

//How do you make for loops in C? 
// Example
// for(int x = 0; x < 7; x++){
//      printf("%d\n", nums[x])

//How do you make while loops in C?//

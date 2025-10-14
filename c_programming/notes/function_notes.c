// LC 7th Function Notes
#include <stdio.h>
void birthday(char* name, int age){
    printf("HAPPY BIRTDAY TO YOU!\n");
    printf("HAPPY BIRTDAY TO YOU!\n");
    printf("HAPPY BIRTDAY DEAR %s!\n", name);
    printf("HAPPY BIRTDAY TO YOU!\n");
    printf("HAPPY BIRTHDAY %s YOU ARE %d\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have: ",type);
    scanf("%f", &value);
    return value;
}
int main(void){
    birthday("Jesus", 15);
    birthday("Gwen", 14);
    birthday("Cecily", 16);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("You have %.2f pencils and %.f noteboks!", pencils, notebooks);
    return 0;
}

//What a function is
// a new type of code that when called will play the code inside it

//Why we use functions
// saves space and makes the code look cleaner

//How to write a function in C
//void birthday(void){
//    printf("HAPPY BIRTDAY TO YOU!\n");
//    printf("HAPPY BIRTDAY TO YOU!\n");
//    printf("HAPPY BIRTDAY DEAR KEYLEE!\n");
//    printf("HAPPY BIRTDAY TO YOU!\n");
//    printf("HAPPY BIRTHDAY KEYLEE YOU ARE 13\n");
//What are arguments and parameters?
// Arguments - 
//How do arguments and parameters work together?
// arguments define the statesment and parameters take it and see if it is called

//How to use parameters and arguments in C
// make a varuable in the function and call it
//Example 
// birthday("Jesus")

//What are return statements?
// it takes what in the return statement and places it exactly where you put the function

//How do return statements change how you define a function in C?
// it changes what is called and the value it is

//What do return statements do with the information?
// they take the info and place it where it is called
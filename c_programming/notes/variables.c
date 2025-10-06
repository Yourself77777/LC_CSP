// LC 7th Variable Note
#include <stdio.h>

int main(void){
    int grade = 95; // 4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade; // 1 byte
    char name[50];
    //User input 
    printf("What is your name\n");
    fgets(name, sizeof(name), stdin);

    printf("What is your grade percentage as a whole number: ");
    scanf("%d", &grade);
    while (getchar() != '\n');
    printf("What is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("you have a %d, in the class. That is an %c\n", grade, letter_grade);

    return 0;
}

//List three common data types used in C and their corresponding format specifiers for printf().
// int/ 4 bytes -> d
// float / 4 bytes -> f
// double / 8 bytes -> if
// char / 1 byte -> c

//What is the main difference between declaring variables in Python and C?
// python is a dynamicly language A.K.A All variables take same amount of space
// C is the opposite and takes and least space as possible

//In C, what is the purpose of specifying a data type when declaring a variable?
// they byte sizes will change

//List three common data types used in C and their corresponding format specifiers for printf().
// int grade = 95; 
// printf("%d is your grade!\n", grade);
// float 

// double 

// char name[] = "Lindon";
// printf("%s did it!\n", name);

//How do you declare and initialize an integer variable named "age" with the value 25 in C?

//What is the difference between printf() and scanf() functions in C?
// scanf looks for two peaces of info
// and printf just does what it says

//How do you add comments in C?
// you use the // slash command

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
// it tells the code that i want to run what is under it

//In C, what is the significance of the main() function?
// main is a function and every line of code in C must be in a function

//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?
// \n

//What is the purpose of the & symbol when using scanf() to get user input?
// it tells the code to rplace what is already there

//How do you declare a constant in C? Provide an example.
// you write const before the other code
// const float pi = 3.14
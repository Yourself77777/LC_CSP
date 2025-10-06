// LC 7th Expresstion Notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;
    printf("%d", year);
    printf("%d\n", 8/3);
    printf("%f\n", 8.0/3);
    printf("%d\n", (int) pow(2, 4));

    year +=1;  // compound assignment operators
    printf("%d", year);
    year++; // incrimentor
    printf("%d", year);

    return 0;
}

//What is the difference between an integer and a float in C?

//How does C handle integer division compared to float division?
// if both numbers are intergirs it will be an intergir in the end

//List the arithmetic operators available in C and their functions.
// addition + adds numbers
// Subtraction - subtractios numbers
// division / divides numbers
// multiplication * multiplys numbers
// modulo % leaves the decimal in a division problem
// pow pow(x, y)

//What is the modulus operator, and how is it used?
// it gives you remiders on how to do stuff
//How do you round a float to the nearest integer in C?
// add a .0 to the end of the code

//What is type casting in C? Provide an example of explicit type casting.
// when you change somthing from a data type to another
// Example 
// (int)

//How do compound assignment operators work in C? List three examples.

//What is the purpose of the math.h library? Name three functions it provides.
// it allows you to add stuff like
// pow
// log
// acos

//How do you print a float with a specific number of decimal places using printf()?
// affter the % somthing you add .how many you want to go from

//What happens when you mix integer and float operations in C?
// you get an error
// LC 7th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){

    float income;
    float rent;
    float utils;
    float gro;
    float trans;


    printf("What is your monthly income: ");
    scanf("%f", &income);

    printf("What is your monthly pay for rent/mortagage: ");
    scanf("%f", &rent);

    printf("what is your monthly pay in utilities: ");
    scanf("%f", &utils);

    printf("what is your monthly pay for groceries: ");
    scanf("%f", &gro);

    printf("what is your monthly pay in transportation: ");
    scanf("%f", &trans);

  

    printf("Your monthly icome is %.2f\n", income);
    printf("Your monthly rent is %.2f\n", rent);
    printf("Your monthly utilities is %.2f\n", utils);
    printf("Your mothly gro is %.2f\n", gro);
    printf("Your monthly transportation is %.2f\n",trans);

    float perct1;
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);

    float perct1;
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);

    float perct1;
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);

    float perct1;
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);    
    
    float perct1;
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);

    
    return 0;1
}
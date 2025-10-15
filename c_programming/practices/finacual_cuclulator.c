// LC 7th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){

    float income;
    float rent;
    float utils;
    float gro;
    float trans;
    float spending_money;
    float perct4;
    float perct3;
    float perct2;
    float perct1;
    float saving_money;


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
    printf("Your mothly groceries is %.2f\n", gro);
    printf("Your monthly transportation is %.2f\n",trans);

    
    perct1=(rent/income)*100;
    printf("Your rent is %.2f that is %.2f percent of your income\n", rent,perct1);

    
    perct2=(utils/income)*100;
    printf("Your monthly utilities is %.2f that is %.2f percent of your income\n", utils,perct2);

    
    perct3=(gro/income)*100;
    printf("Your monthly groceries is %.2f that is %.2f percent of your income\n", gro,perct3);

    
    perct4=(trans/income)*100;
    printf("Your monthy pay for transportation is %.2f that is %.2f percent of your income\n", trans,perct4);
    
    saving_money = income*.10;
    printf("You should save around %f\n", saving_money);

    
    spending_money = income - (rent+utils+gro+trans+saving_money);
    printf("you have %.2f spending money each month!", spending_money);
    
    printf("End code");
    return 0;
}
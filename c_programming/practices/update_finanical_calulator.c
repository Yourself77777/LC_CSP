// LC 7th Update Financial Calculator
#include <stdio.h>
#include <math.h>
int calculate(float income, float type, char* word){

    float perct=(type/income)*100;
    printf("Your monthly %s is %.2f that is %.2f%% of your income\n", word, type, perct);
}
int ask_question(char* word1, float varuable1){

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

    printf("What is your monthly %s: ", word1);
    scanf("%f", &varuable1);    

    return varuable1;
}

int main(void){

    float income;
    float rent;
    float utils;
    float gro;
    float trans;
    float spending_money;
    float saving_money;


    income = ask_question("income", income);

    rent = ask_question("Rent", rent);

    utils = ask_question("Utilitys", utils);

    gro = ask_question("groceries", gro);

    trans = ask_question("transprotation", trans);

  

    printf("Your monthly income is %.2f\n", income);
    printf("Your monthly rent is %.2f\n", rent);
    printf("Your monthly utilities is %.2f\n", utils);
    printf("Your mothly groceries is %.2f\n", gro);
    printf("Your monthly transportation is %.2f\n",trans);

    
    calculate(income, rent, "rent");
    
    calculate(income, utils, "Utilities");

    calculate(income, gro, "Groceries");

    calculate(income, trans, "Transportation");

    saving_money = income*.10;
    printf("You should save around %.2f%%\n", saving_money);

    
    spending_money = income - (rent+utils+gro+trans+saving_money);
    printf("you have %.2f spending money each month!", spending_money);

    return 0;
}
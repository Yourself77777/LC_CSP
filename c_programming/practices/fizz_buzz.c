// LC 7th Fizz Buzz
#include <stdio.h>

int main(void){
    int x = 1; 
    
    for (int x = 1; x <= 50; x++) {
         
        if (x % 3 == 0 && x % 5 == 0){
            printf("FizzBuzz\n");
        }else if (x % 3 == 0){
            printf("Fizz\n");
        }else if (x % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", x);
        }
    }
    return 0;
}
// LC 7th Time Of Day
#include <stdio.h>
#include <string.h>

int main(void){
    int time;
    printf("What is the time of day military time ther hour:\n");
    scanf("%d", &time);

    if(time >= 17){
        printf("Good evening it is %d in military time", time);
    }else if(time >= 12){
        printf("Good afternoon it is %d in military time", time);
    }else{
        printf("good morning it is %d in military time", time);
    }
    return 0;
}
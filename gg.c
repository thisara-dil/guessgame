#include<stdio.h>

int main(){

    int number = 10;
    int guess_number;
    int guess_limit= 4;
    int i;
    int n =4;

    for(i=1;i<=guess_limit;i++){
        printf("Guess Number: ");
        scanf("%d",&guess_number);

        if(guess_number==number){
        printf("answer is correct ");
        break;
        }
        if(guess_number!=number){
        printf("answer is wrong \n");
        printf("you have another %d chance \n",--n);
        continue;
        }

    }
}

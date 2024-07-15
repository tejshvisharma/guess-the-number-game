#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
    // initializing the random number generator function
    srand(time(0));
    // generate number between 0 to 100
    int random_number = (rand()%100)+1;
    int number_of_guesses = 0;
    int guessed;
    printf("                   \033[34m++----------------------------------++\033[0m\n");
    printf("                   \033[32m|     Welcome to Guess the Number!   |\033[0m\n");
    printf("                   \033[34m++----------------------------------++\033[0m\n");

    do{
        printf("\033[31m Guess The Secret Number: \033[0m");

        scanf("%d",&guessed);
        if(fabs(guessed-random_number)<=3)
        printf("\033[34mYou Are Almost There!\033[0m\n");
        else if(guessed>random_number)
        printf("\033[32mLower Number Please!\033[0m\n");
        else
        printf("\033[1;33mHigher Number Please!\033[0m\n");
        
         number_of_guesses++;
    }while (guessed!=random_number);
    printf("\033[32m************CONGRATULATIONS*************\033[0m\n");

   printf("\033[1;33mYou Have Guessed The Number In %d Guesses\033[0m\n", number_of_guesses);

    return 0; 
}




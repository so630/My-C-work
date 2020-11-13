#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// defining the constants
#define NUMBEROFTRIES 5

void main()
{
    // initializing random number generator
    time_t t;
    srand((unsigned) time(&t));

    // getting the random number and storing to a variable
    int rnum = rand() % 21;
    int tries = 0;
    int guess = 0;
    int numberoftries = 5;
    // printing the startmessage
    PrintMessage();

    // game logic
    while(tries < 5 || guess == rnum)
    {
        printf("\nyou have %d number of tries left!", numberoftries);
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        while(guess > 20)
        {
            printf("\nenter a guess which is smaller than 20!");
            printf("\nEnter your guess: ");
            scanf("%d", &guess);
        }

        if(guess > rnum)
        {
            printf("sorry, %d is wrong. My number is less than that", guess);
            tries++;
            numberoftries--;
        }
        else if(guess < rnum)
        {
            printf("sorry, %d is wrong. My number is more than that", guess);
            tries++;
            numberoftries--;
        }
        else if(guess == rnum)
        {
            printf("you have guessed correctly, well done!");
            break;
        }
        else if(tries > 5)
        {
            printf("you have no tries left");
            printf("the number was %d", rnum);
            break;
        }
    }


}

// printing the message
void PrintMessage()
{
    printf("This is a guessing game!");
    printf("\nI have chosen a number between 0 and 20 which you need to guess!");
    printf("\nyou have %d tries!", NUMBEROFTRIES);
}

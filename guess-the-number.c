#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator using the current time
    srand(time(0));

    int random_number = 1 + (rand() % 100);
    int input;

    printf("Guess the number : ");
    scanf("%i", &input);

    for (int i = 0; i < 10; i++)
    {
        if (input == random_number)
        {
            printf("You are right - %i Chance", i);
            return 0;
        }
        else if (input > random_number)
        {
            printf("You Guess a big number\nNow Guess :");
            scanf("%i", &input);
        }
        else
        {
            printf("You Guess a small number\nNow Guess :");
            scanf("%i", &input);
        }
    }
    printf("You are out of chance, The correct number is %i\n", random_number);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    printf("Press 0 for Rock\nPress 1 for Paper\nPress 2 for Scissor\n");
    while (1)
    {
        
        printf("Enter your Choice: ");
        scanf("%d", &player);

        if (player == 0 && computer == 0)
        {
            printf("It is a tie\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("Computer won\n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("You won\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("You won\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("It is a tie\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("Computer won\n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("Computer won\n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("You won\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("It is a tie\n");
        }
        if (player > 2 || player < 0)
        {
            printf("Entered an invalid choice");
            break;
        }

        if (computer == 0)
        {
            printf("Computer chose Rock\n");
        }
        if (computer == 1)
        {
            printf("Computer chose Paper\n");
        }
        if (computer == 2)
        {
            printf("computer  chose Scissor\n");
        }
    }
}

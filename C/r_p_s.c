#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize game
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    char playAgain;
    char continuePlaying = 'y';
    srand(time(0)); 

    // Display game instructions
    printf("Rock-Paper-Scissors Game\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");

    // Game loop
    while(continuePlaying == 'y') {
        do {
            // Get player choice
            printf("Enter your choice: ");
            scanf("%d", &playerChoice);
            // Get computer choice
            computerChoice = rand() % 3 + 1;
            // Compare choices and determine winner
            switch(computerChoice) {
                case 1: printf("Computer choice: Rock\n"); break;
                case 2: printf("Computer choice: Paper\n"); break;
                case 3: printf("Computer choice: Scissors\n"); break;
            }
            if (playerChoice == computerChoice) {
                printf("Tie!\n");
            } else if (playerChoice == 1 && computerChoice == 3 || playerChoice == 2 && computerChoice == 1 || playerChoice == 3 && computerChoice == 2) {
                printf("You win!\n");
                playerScore++;
            } else {
                printf("Computer wins!\n");
                computerScore++;
            }
            printf("Player Score: %d\n", playerScore);
            printf("Computer Score: %d\n", computerScore);
            printf("\n"); // Add a new line after each game
            //Ask if player wants to play again
            printf("Do you want to play again? (y/n) ");
            scanf(" %c", &playAgain);
        } while (playAgain == 'y');

        // Print game results in a table format
       /* printf("\nGame Results:\n");
        printf("---------------------------------------------------\n");
        printf("| %-15s | %-15s | %-15s |\n", "Player Choice", "Computer Choice", "Result");
        printf("---------------------------------------------------\n");
        int i;
        for (i = 1; i <= playerScore; i++) {
            printf("| %-15s | %-15s | %-15s |\n", "Rock/Paper/Scissors", "Rock/Paper/Scissors", "You Win!");
        }
        for (i = 1; i <= computerScore; i++) {
            printf("| %-15s | %-15s | %-15s |\n", "Rock/Paper/Scissors", "Rock/Paper/Scissors", "Computer Wins!");
        }
        */
        printf("---------------------------------------------------\n");
        printf("Do you want to continue playing? (y/n) ");
        scanf(" %c", &continuePlaying);
    }
    printf("Final score:\n");
     printf("Player Score: %d\n", playerScore);
            printf("Computer Score: %d\n", computerScore);
    
    return 0;
}



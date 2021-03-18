#include <stdio.h>
#include "Cards.h"



// First function gets the player's name
int main()
{
	char name[20];

	printf("Please enter your name!");

	// fgets used to retrieve name of player 1
	fgets(name, 20, stdin);

	// Welcomes player to the game
	printf("Welcome to Uno %s !", name);

	

    // enum assigns names to constants making the program easier to work with
    enum Cards
    {
        Cero, Uno, Dos, Tres, Cuatro, Cinco, Seis, Siete, Ocho, Nueve, Skip, Two, Rainbowfour, Reversal, Rainbow
    };

    enum Colors
    {
        Blue, Red, Yellow, Green, Black
    };
    // Struct stores enumerated items
    typedef struct {
        enum Cards Card;
        enum Colors Color;
    } Card;

    Card Card[108];
    int i, j, d;

    // for loop that helps set values of the card combinations
    for (i = 0; i <= 39; i++)
    {
       
        for (j = 0; i <= 4; j++)
        {
            
            Card[i] = (Card){ 0, 20, j };
        }
        // Array to print out player 1's cards after shuffle
            for(d = 0; i < 7; d++)
            {
                scanf_s("%d", &card_t[i]);
            }
            printf("%s has : ");

            for (int d = 0, i < 5; ++i) {
                printf("%d\n", card_t[i]);
            }
            return 0;
    }



// "Dealer" places card down for player and cpu to match
 // startingCard()

// Player chooses card to place down
 // placeCard()

// Distinguishes human from computer card
// humanCard()

// Rewards point to cpu if computer card
// givePointCPU()

// Rewards point to human if human card
// givePointHuman()

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

	return 0;
}


// Divides cards amongst the player and cpu
//getDeck()

// "Dealer" places card down for player and cpu to match
//startingCard()

// Player chooses card to place down
//placeCard()

// Distinguishes human from computer card
//humanCard()

// Rewards point to cpu if computer card
//givePointCPU()

// Rewards point to human if human card
//givePointHuman()







#include "Deck.h"

using namespace std;

Deck::Deck()
{
	string suits[5] = {
		"Mercury", "Venus", "Mars", "Jupiter", "Saturn"
	};

	string currentSuit;

	for (int suitCounter = 0; suitCounter < 5; suitCounter++)
	{
		currentSuit = suits[suitCounter];
	}

}
#include "Deck.h"

using namespace std;

Deck::Deck()
{
	string suits[5] = {
		"Mercury", "Venus", "Mars", "Jupiter", "Saturn"
	};

	char values[5] = { 'A', 'B', 'C', 'D', 'E' };

	bool charges[2] = { true, false };

	string currentSuit;
	char currentValue;
	bool currentCharge;

	// Iterate through each planetary suit.
	for (int suitCounter = 0; suitCounter < 5; suitCounter++)
	{
		currentSuit = suits[suitCounter];

		// Iterate through each card value.
		for (int valueCounter = 0; value < 5; valueCounter++)
		{
			currentValue = values[valueCounter];

			// Iterate through both possible charges.
			for (int chargeCounter = 0; chargeCounter < 2; chargeCounter++)
			{
				currentCharge = charges[chargeCounter];
			}

		}
	}

}
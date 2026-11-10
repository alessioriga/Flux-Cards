#pragma once

#include <string>

class Card {
private:
	char value;
	std::string suit;
	bool charge;

public:
	Card(char value, const std::string& suit, bool charge);

	char getValue() const;
	std::string getSuit() const;
	bool getCharge() const;
};


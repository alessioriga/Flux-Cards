#include "Card.h"

Card::Card(char value, const std::string& suit, bool charge)
{
	this->value = value;
	this->suit = suit;
	this->charge = charge;
}

char Card::getValue() const
{
	return this->value;
}

std::string Card::getSuit() const
{
	return this->suit;
}

bool Card::getCharge() const
{
    return this->charge;
}
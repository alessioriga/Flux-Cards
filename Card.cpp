#include "Card.h"

using namespace std;

Card::Card(char value, const string& suit, bool charge)
{
	this->value = value;
	this->suit = suit;
	this->charge = charge;
}

char Card::getValue() const
{
	return this->value;
}

string Card::getSuit() const
{
	return this->suit;
}

bool Card::getCharge() const
{
    return this->charge;
}
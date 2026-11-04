// flux_cards_start.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
#include <vector> //need for vectors
#include <algorithm> //needed for the random shuffle


using namespace std;

struct Card {
	char value;
	string suit;
	bool charge;
};

bool get_charge(int counter);
string get_suit();
char get_value();
void create_deck(vector <Card*>& flux_deck);
void shuffle_cards(vector <Card*>& flux_deck);
void test_shuffle(vector <Card*>& flux_deck); //this function is only for demo purposes
void play_game(vector <Card*>& flux_deck);
int get_card_value(char card_value);



int main()
{

	// Get a different random number each time the program runs
	srand(time(0));
	//create a vector of pointers to a card struct
	//in real life we do not make copies of cards as we play, so it makes sense to use pointers
	vector<Card*> flux_deck;

	//populate the vector with cards
	create_deck(flux_deck);

	//shuffle the cards
	cout << "Before Shuffle" << endl;
	//test with the first few
	test_shuffle(flux_deck);

	shuffle_cards(flux_deck);
	cout << "After Shuffle" << endl;
	test_shuffle(flux_deck);
	play_game(flux_deck);
}

void play_game(vector <Card*>& flux_deck) {
	Card* computer_card = flux_deck[0];
	Card* human_card = flux_deck[1];

	int computer_value = get_card_value(computer_card->value);
	int human_value = get_card_value(human_card->value);
	if (computer_value > human_value) {
		cout << "Computer wins!";
	}
	else if (human_value > computer_value) {
		cout << "Human wins!";
	}
	else {
		cout << "A draw!";
	}
}

int get_card_value(char the_card_value) {
	int int_value;
	switch (the_card_value) {
	case 'A':
		int_value = 1 ;
		break;
	case 'B':
		int_value = 2;
		break;
	case 'C':
		int_value = 3;
		break;
	case 'D':
		int_value = 4;
		break;
	case 'E':
		int_value = 5;
		break;
	}
	return int_value;
}

void create_deck(vector <Card*>& flux_deck) {
	bool charge;
	string suit;
	char value;

	for (int i = 0; i < 50; i++) {

		value = get_value();
		suit = get_suit();
		charge = get_charge(i);

		//put a new card on the heap and assign it to a pointer
		Card* theCard = new Card{ value, suit, charge };
		flux_deck.push_back(theCard);
	}
}

void test_shuffle(vector <Card*>& flux_deck) {
	//notice the two different ways of writing the values of the cards
	for (int i = 0; i < 5; i++) {
		cout << flux_deck[i]->value << " of " << (*flux_deck[i]).suit << " with a " << (*flux_deck[i]).charge << " charge" << endl;
	}
}

//we send in a vector of points - no need to return a value
void shuffle_cards(vector <Card*>& flux_deck) {
	random_shuffle(flux_deck.begin(), flux_deck.end());
}

//return the value for each card
char get_value() {
	char values[5] = { 'A', 'B', 'C', 'D', 'E'};
	int randomNum = rand() % 5;
	return values[randomNum];
}

//return the suit for each card
string get_suit() {
	string suits[5] = { "Mercury", "Venus", "Mars", "Jupiter", "Saturn"};
	// Generate a random number between 0 and 4
	int randomNum = rand() % 5;
	return suits[randomNum];
}

//get the charge for each card
bool get_charge(int counter) {
	bool theCharge;

	if (counter % 2 == 0) {
		theCharge = true;
	}
	else {
		theCharge = false;
	}
	return theCharge;
}

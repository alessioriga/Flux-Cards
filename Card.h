
#pragma once

#include <string>

/**
 * @brief Represents a single card in the Flux Deck game.
 *
 * Each card has a value, a planetary suit and a charge.
 */
class Card {
private:
    char value;
    std::string suit;
    bool charge;

public:
    /**
     * @brief Constructs a card with the specified properties.
     *
     * @param value The card's letter (A-E).
     * @param suit The card's planetary suit.
     * @param charge True for positive, false for negative.
     */
    Card(char value, const std::string& suit, bool charge);

    /**
     * @brief Returns the card's letter value.
     * @return The card's value.
     */
    char getValue() const;

    /**
     * @brief Returns the card's planetary suit.
     * @return The card's suit.
     */
    std::string getSuit() const;

    /**
     * @brief Returns the card's charge.
     * @return True if positive, false if negative.
     */
    bool getCharge() const;
};

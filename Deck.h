#pragma once

#include <vector>
#include "Card.h"

/**
 * @brief Represents and manages the Flux Deck card deck.
 *
 * The deck contains 50 unique cards, each defined by
 * a value, a planetary suit and a charge.
 */
class Deck {
private:
    // Stores pointers to the Card objects in the deck.
    std::vector<Card*> cards;

public:
    /**
     * @brief Constructs a new deck of cards.
     */
    Deck();

    /**
     * @brief Destroys the deck and releases allocated memory.
     */
    ~Deck();

    /**
     * @brief Prevents the deck from being copied.
     *
     * @details Avoids multiple Deck objects owning the same
     * dynamically allocated cards, preventing double deletion.
     */
    Deck(const Deck&) = delete;

    /**
     * @brief Prevents copy assignment between decks.
     *
     * @details Ensures that a deck cannot share ownership
     * of dynamically allocated cards with another deck.
     */
    Deck& operator=(const Deck&) = delete;

};

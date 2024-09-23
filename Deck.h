/*
 * Deck.h
 *
 * Nick Cochran
 * email: c.nick@wustl.edu
 *
 * This header file contains the abstract Deck class to be implemented elsewhere.
 *
 */

#ifndef LAB0_DECK_H
#define LAB0_DECK_H

#include "includes.h"
#include "CardSet.h"

template<typename Suit, typename Rank> class Deck : public CardSet<Suit, Rank> {
 public:
    void shuffle() {
        std::random_device random_device;
        auto rng = std::mt19937(random_device());

        std::shuffle(this->cards.begin(), this->cards.end(), rng);
    }
};

#endif //LAB0_DECK_H

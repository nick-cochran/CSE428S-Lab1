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
    void shuffle();
    void collect(CardSet<Suit, Rank>& card_set);
};

#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE

#include "Deck.cpp"

#endif // TEMPLATE_HEADERS_INCLUDE_SOURCE

#endif //LAB0_DECK_H

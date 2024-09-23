//
// Created by Nick Cochran on 9/22/24.
//

#ifndef LAB1_CARDSET_H
#define LAB1_CARDSET_H

#include "includes.h"
#include "Card_T.h"

template <typename Suit, typename Rank> class CardSet {
 protected:
    vector< Card<Suit, Rank> > cards;
 public:
    void print(ostream& ost, size_t size);
};

#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE

#include "CardSet.cpp"

#endif // TEMPLATE_HEADERS_INCLUDE_SOURCE

#endif //LAB1_CARDSET_H

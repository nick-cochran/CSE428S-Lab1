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

class Deck {
 public:
    virtual void print(ostream& ost) = 0;
};

#endif //LAB0_DECK_H

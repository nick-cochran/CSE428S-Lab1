/*
 * Card_T.cpp
 * Author: Nick Cochran
 * Email: c.nick@wustl.edu
 *
 * This source file contains the definitions for the Card struct and a << operator for it.
 */

#include "Card_T.h"

using namespace std;

template<typename S, typename R>
Card<S, R>::Card(S suit, R rank): suit(suit), rank(rank) {}


template<typename S, typename R>
ostream& operator<<(ostream& ost, const Card<S, R>& card) {
    ost << card.suit;
    ost << card.rank;
    return ost;
}

//
// Created by Nick Cochran on 9/22/24.
//

#include "CardSet.h"

template<typename Suit, typename Rank>
void CardSet<Suit, Rank>::print(std::ostream &ost, size_t size) {
    size_t count = 0;
    for(Card<Suit, Rank> card : cards) {
        count++;
        ost << card << " ";
        if(count >= size) {
            count = 0;
            ost << endl;
        }
    }
}

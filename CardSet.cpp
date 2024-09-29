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

// part 9
template<typename Suit, typename Rank>
CardSet<Suit, Rank>& CardSet<Suit, Rank>::operator>>(CardSet<Suit, Rank>& card_set) {

    try {
        // this should work?
        if(this->is_empty()) {
            throw runtime_error("Card set is empty");
        }

        card_set.cards.push_back(this->cards.back());
        this->cards.pop_back();
    } catch(string& e) {
        cout << "Error: " << e << endl;
    }

    return *this;
}

template<typename Suit, typename Rank>
bool CardSet<Suit, Rank>::is_empty() {
    return this->cards.empty();
}
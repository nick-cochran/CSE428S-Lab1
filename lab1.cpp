/*
 * lab0.cpp
 *
 * Nick Cochran
 * email: c.nick@wustl.edu
 *
 * This source file contains the main function to run the code.
 *
 */

#include "Card_T.h"
#include "PinochleDeck.h"
#include "HoldEmDeck.h"

using namespace std;


int main() {
    PinochleDeck pDeck;
    HoldEmDeck heDeck;

    pDeck.print(cout);
    heDeck.print(cout);

    return SUCCESS;
}
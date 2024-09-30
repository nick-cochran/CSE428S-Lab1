//
// Created by Nick Cochran on 9/29/24.
//

#ifndef LAB1_LAB1_H
#define LAB1_LAB1_H

#include "Card_T.h"
#include "PinochleGame.h"
#include "HoldEmGame.h"
#include <memory>

int main(int argc, const char **argv);
int usage();
shared_ptr<Game> create(int argc, const char **argv);

#endif //LAB1_LAB1_H

#ifndef PARTICIPANT_H
#define PARTICIPANT_H
using namespace std;
#include <string>
#include <vector>
#include "Card.h"

struct Participant
{
    string name;
    vector<Card> hand;
};

#endif
#include <iostream>
#include "deck.h"
#include "Participant.h"

using namespace std;

int main()
{
    vector<Card> deck = shuffleDeck();
    cout << "Runnnign now/.\n";

    for (Card c : deck)
    {
        cout << c.ranking << " of " << c.suit << " (" << c.color << ")\n";
    }
    cout << deck.size();
}
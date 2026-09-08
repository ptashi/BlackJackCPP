#include "deck.h"
#include <algorithm>
#include <random>

using namespace std;

namespace
{
    string ranks[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
}

vector<Card> generateDeck()
{
    vector<Card> deck;

    for (int i = 0; i < (sizeof(suits) / sizeof(suits[0])); i++)
    {
        for (int j = 0; j < (sizeof(ranks) / sizeof(ranks[0])); j++)
        {
            Card card;
            if (suits[i] == "Hearts" || suits[i] == "Diamonds")
            {
                card.color = "red";
            }
            else
            {
                card.color = "black";
            }
            card.suit = suits[i];
            card.ranking = ranks[j];

            deck.push_back(card);
        }
    }

    return deck;
}

vector<Card> shuffleDeck()
{
    vector<Card> deck = generateDeck();

    random_device rd;
    mt19937 g(rd());

    shuffle(deck.begin(), deck.end(), g);

    return deck;
}
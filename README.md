# Blackjack (C++)

There will be 2 versions:

1. console-based BJ for learning the basics of C++
2. an actual Blackjack game with an interactive UI

## Features

- card deck & shuffling
- Player v Dealer Logic
- Hit / stay gameplay

## How to run

g++ src/main.cpp src/deck.cpp -o build/game
./build/game

## Steps...

1. Basic generation/shuffling of the deck
2. Began modularization of the different components, so that main.cpp stays clean.
3. Implement the logic behind BJ
   a. Dealing out two cards per hand
   b. Calculate hand value (aces as 1 or 11, face cards as 10)
   c. Player turn: hit / stand
   d. Dealer turn logic (hit until 17+)
   e. Determine winner / bust conditions
   f. Betting / chip tracking

## Requirements

A C++11 (or later) compatible compiler (e.g. g++, MinGW on Windows)

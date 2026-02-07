#include <iostream>
#include <random>
#include "horse.h"

// Setup random engine
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

// 1. HORSE CONSTRUCTOR
Horse::Horse() {
    position = 0;
    index = 0;
    tracklength = 15;
}

// 2. HORSE INIT
void Horse::init(int index, int trackLength) {
    this->position = 0;
    this->index = index;
    this->tracklength = trackLength;
}

// 3. HORSE ADVANCE
void Horse::advance() {
    int coin = dist(rd);
    position += coin;
}

// 4. HORSE PRINTLANE
void Horse::printLane() {
    for (int pos = 0; pos < tracklength; pos++) {
        if (pos == position) {
            std::cout << index;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

// 5. HORSE ISWINNER
bool Horse::isWinner() {
    if (position >= tracklength) {
        return true;
    }
    return false;
}

// --- RACE IMPLEMENTATION ---

Race::Race() {
    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i].init(i, 30); 
    }
}

void Race::startRace() {
    bool keepGoing = true;
    while (keepGoing) {
        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
            horses[i].printLane();
            if (horses[i].isWinner()) {
                std::cout << "Horse " << i << " wins!" << std::endl;
                keepGoing = false;
                break; // Stop checking other horses this round
            }
        }
        std::cout << "========================================" << std::endl;
    }
}
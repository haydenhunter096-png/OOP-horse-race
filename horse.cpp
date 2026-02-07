#include <iostream>
#include <random>
#include "horse.h"


std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);



Horse::Horse() {
    position = 0;
    index = 0;
    tracklength = 15;
}

void Horse::init(int index, int trackLength) {
    this->position = 0;
    this->index = index;
    this->tracklength = trackLength;
}

void Horse::advance() {
  
    int coin = dist(rd);
    position += coin;
}

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

bool Horse::isWinner() {
    if (position >= tracklength) {
        return true;
    }
    return false;
}



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
                std::cout << "Horse " << i << " wins the race!" << std::endl;
                keepGoing = false;
                
                break; 
            }
        }
        std::cout << "------------------------------------------" << std::endl;
    }
}
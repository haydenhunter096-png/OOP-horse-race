// horse.cpp
#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
    Horse::position = 0;
    Horse::index = 0;
    Horse::tracklength = 15;

} // end constructor

void Horse::init(int index, int trackLength){
    Horse::position = 0;
    Horse::index = index;
    Horse::tracklength = trackLength;
} // end init

void Horse::advance(){
    int coin = dist(rd);
    Horse::position += coin;
} // end advance

void Horse::printLane(){
    for (int pos = 0; pos < Horse::tracklength; pos++){
        if (pos == Horse::position){
            std::cout << Horse::index;
        } else {
            std::cout << ".";
        } // end if
    } // end for
    std::cout << std::endl;
} // end printLane

bool Horse::isWinner(){
    bool result = false;
    if (Horse::position >= Horse::tracklength){
        result = true;
        std::cout << "Horse " << Horse::index << " wins!" << std::endl;
    } // end if
    return result;
} // end isWinner

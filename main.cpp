#include <iostream>
#include "horse.h"

int main(){
    std::cout << "OOP Horse Race!!!" << std::endl;

    testHorse();

    return 0;

} // end main

void testHorse(){
    Horse h;
    h.init(1, 15);
    bool keepGoing = true;
    while (keepGoing){
        h.advance();
        h.printLane();
        if (h.isWinner()){
            keepGoing = false;
        } // end if
    } // end while
    
} // end testHorse
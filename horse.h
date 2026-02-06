// horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

const int NUM_HORSES = 8;

class Horse {
    private:
        int position;
        int index;
        int tracklength;
    public:
        Horse();
        void init(int index, int trackLength);
        void advance();
        void printLane();
        bool isWinner();

};

class Race {
    private:
        // Use the constant to size the array of horses
        Horse horses[NUM_HORSES];
    public:
        Race();
        void startRace();
};

#endif
horseRace: main.o horse.o
	g++ -g -o horseRace main.o horse.o

main.o: main.cpp horse.h
	g++ -g -c main.cpp

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

clean:
	rm -f horseRace *.o

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

# OOP-horse-racerseRace OOP

## UML
```mermaidclassDiagram

class Horse{
    position:int
    index:int
    trackLength:int
    Horse()
    init(int index, int trackLength)
    advance()
    printLane()
    isWinner()bool
}

class Race{
    TRACK_LENGTH:int
    Horse horses[HORSE_NUM]
    Race()
}

Race --> Horse```

in header
	set const static int_NUM_HORSES to 5
	set constant in TRACK_LENGTH to 15
in constructor
	go through each horse
	initialize that horse by calling it's init
```

## Race.start()
```
set bool keepGoing to true
while keepGoing:
	for each horse:
		advance that horse
		print horse lane
			set keepGoing to false
```

## Horse::Horse()
```
	set position to 0
	set index to 0
	set track_length
```

## Horse::init(int index, int trackLength){
	my index = index
	my trackLength = trackLength
	my position = 0
```

## Horse::advance
```
	roll a random 0-1 int called coin
	add coin to position
```

## Horse::printLane()
```
	pos from 0 to track length:
		if pos == my position:
			print index
		otherwise:
			print"."
		print newline
```

## bool Horse::isWinner
	bool result = false
	if position >= trackLength
		result = true
		print some winning commentary
	return result
```



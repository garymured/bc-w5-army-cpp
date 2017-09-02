CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=main.cpp Unit/Unit.cpp UnitState/UnitState.cpp Ability/Ability.cpp Soldier/Soldier.cpp Rogue/Rogue.cpp Vampire/Vampire.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o main.out

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o *.out
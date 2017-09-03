CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=main.cpp Units/Unit.cpp UnitState/UnitState.cpp Ability/Ability.cpp Units/Soldier.cpp Units/Rogue.cpp Units/Vampire.cpp Units/Werewolf.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o main.out

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(SOURCES:.cpp=.o) *.out
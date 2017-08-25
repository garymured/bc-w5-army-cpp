CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=main.cpp Unit.cpp UnitState.cpp Ability.cpp Soldier.cpp Rogue.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o main.out

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o *.out
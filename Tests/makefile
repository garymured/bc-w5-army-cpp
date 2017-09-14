CC=g++
CFLAGS=-c
LDFLAGS=
SOURCES=main.cpp ../Units/Unit.cpp ../UnitState/UnitState.cpp ../Ability/Ability.cpp ../Units/Soldier.cpp ../Units/Rogue.cpp ../Units/Vampire.cpp ../Units/Werewolf.cpp tests_soldier.cpp tests_rogue.cpp tests_vampire.cpp tests_werewolf.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o test.out

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(SOURCES:.cpp=.o) *.o
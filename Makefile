A_Little_RPG: main.o character.o dice.o action.o
	g++ main.o character.o dice.o action.o  -o A_Little_RPG

main.0: main.cpp
	g++ -c main.cpp
character.o: ./character/character.cpp ./character/character.h
	g++ -c ./character/character.cpp ./character/character.h
dice.o: ./utils/dice.cpp ./utils/dice.h
	g++ -c ./utils/dice.cpp ./utils/dice.h
action.o: ./utils/action.cpp ./utils/action.h
	g++ -c ./utils/action.cpp ./utils/action.h
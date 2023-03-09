output: main.o Gigachad.o Lazybones.o SleepyJeff.o Snorlax.o attackmove.o character.o healingmove.o playable.o statboostingmove.o
		g++ character.o playable.o SleepyJeff.o Snorlax.o Lazybones.o Gigachad.o attackmove.o healingmove.o statboostingmove.o main.o -o output

main.o: main.cpp
		g++ -c main.cpp

character.o: character.cpp character.h
		g++ -c character.cpp

Gigachad.o: Gigachad.cpp Gigachad.h
		g++ -c Gigachad.cpp

Lazybones.o: Lazybones.cpp Lazybones.h
		g++ -c Lazybones.cpp
        
SleepyJeff.o: SleepyJeff.cpp SleepyJeff.h
		g++ -c SleepyJeff.cpp

Snorlax.o: Snorlax.cpp Snorlax.h
		g++ -c Snorlax.cpp

attackmove.o: attackmove.cpp attackmove.h
		g++ -c attackmove.cpp

healingmove.o: healingmove.cpp healingmove.h
		g++ -c healingmove.cpp

playable.o: playable.cpp playable.h
		g++ -c playable.cpp

statboostingmove.o: statboostingmove.cpp statboostingmove.h
		g++ -c statboostingmove.cpp

clean:
		rm *.o output


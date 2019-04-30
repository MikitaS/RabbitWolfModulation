modulation: rabbit.hpp rabbit.cpp simulation.hpp simulation.cpp main.cpp wolf.hpp wolf.cpp
	g++ rabbit.cpp -c
	g++ wolf.cpp -c
	g++ main.cpp -c
	g++ simulation.cpp -c
	g++ main.o rabbit.o simulation.o wolf.o -o modulation
	
	rm main.o rabbit.o simulation.o wolf.o

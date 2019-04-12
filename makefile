modulation: rabbit.hpp rabbit.cpp simulation.hpp simulation.cpp main.cpp 
	g++ rabbit.cpp -c
	g++ main.cpp -c
	g++ simulation.cpp -c
	g++ main.o rabbit.o simulation.cpp -o modulation
	
	rm main.o rabbit.o simulation.o

#include <iostream>
#include "rabbit.hpp"
#include "simulation.hpp"

simulation::simulation() : rabbits_(new RabbitField(INIT_RABBITS_AMOUNT, INIT_RABBITS_POINTS)), dayCounter_(0)
{
}

simulation::~simulation()
{
	delete rabbits_;
	
	dayCounter_ = 0;
}

int simulation::start()
{
	std::string answer;
	srand(time(0));
	
	while(answer != "stop")
	{
		dayCounter_++;
		
		rabbits_ -> search();
		
		rabbits_ -> dump();
		std::cout << "Days passed " << dayCounter_ << std::endl;
	
		std::cout << "write stop to finish simulation" << std::endl;
		std::cin >> answer;
	}
	
}

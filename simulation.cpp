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
	for(int i = 0; i < 200; i++)
		rabbits_ -> born();
	rabbits_ -> dump();
}

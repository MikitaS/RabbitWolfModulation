#pragma once

#include "rabbit.hpp"
#include "wolf.hpp"

class simulation
{
public:
	simulation();
	~simulation();
	
	int start();
	
private:
	RabbitField * rabbits_;
	wolf wolfs_;
	int dayCounter_;
};

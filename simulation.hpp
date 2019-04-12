#pragma once

#include "rabbit.hpp"

class simulation
{
public:
	simulation();//done
	~simulation();//done
	
	int start();
private:
	RabbitField * rabbits_;
	int dayCounter_;
};

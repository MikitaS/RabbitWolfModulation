#pragma once

#include "rabbit.hpp"

class wolf
{
public:
	wolf();
	~wolf();
	
	void dump() const;
	void feed();
	void die();
	void born();
	void update();
	void search(RabbitField * rabbits);
	
private:
	int wolfCounter_;
	int wolfPoints_;
};



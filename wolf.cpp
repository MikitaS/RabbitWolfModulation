#include "wolf.hpp"

#include "iostream"

wolf::wolf() : wolfCounter_(INIT_WOLF_AMOUNT), wolfPoints_(INIT_WOLF_POINTS)
{
}

wolf::~wolf()
{
	wolfCounter_ = 0;
	wolfPoints_ = 0;
}

void wolf::dump() const
{
	std::cout << "Wolf amount is " << wolfCounter_ << std::endl;
	std::cout << "Wolf points is " << wolfPoints_ << std::endl;
	
}

void wolf::die()
{
	--wolfCounter_;
	wolfPoints_ += POINTS_FOR_DEATH_WOLF;
}

void wolf::feed()
{
	while(wolfCounter_ * POINTS_TO_FEED_WOLF > wolfPoints_)
	{
		die();
	}
	
	wolfPoints_ -= wolfCounter_ * POINTS_TO_FEED_WOLF;
}

void wolf::born()
{
	if(wolfPoints_ > POINTS_TO_BORN_WOLF)
	{
		++wolfCounter_;
		wolfPoints_ -= POINTS_TO_BORN_WOLF;
	}
}

void wolf::update()
{
	while(wolfPoints_ > POINTS_TO_BORN_WOLF)
	{
		born();
	}
}

void wolf::search(RabbitField * rabbits)
{
	for(int i = 0; i < AMOUNT_OF_CELLS_TO_SEARCH_WOLFS; ++i)
	{
		if(rabbits -> kill(myrandom() % RABBIT_FIELD_SIZE, myrandom() % RABBIT_FIELD_SIZE ))
		{
			wolfPoints_ += POINTS_FOR_FOUND_FOOD_WOLF;
		}
	}
}

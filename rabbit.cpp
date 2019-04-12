#include "./rabbit.hpp"
#include <iostream>

RabbitField::RabbitField(int rabbitAmount, int rabbitPoints) : rabbitCounter_(0), rabbitPoints_(rabbitPoints)
{
	srand(time(0));
	int i = 0, j = 0;
	
	for(; i < RABBIT_FIELD_SIZE; ++i)
	{
		for(j = 0; j < RABBIT_FIELD_SIZE; ++j)
		{
			field_[i][j] = 0;
		}
	}
	
	for(; rabbitCounter_ < rabbitAmount; ++rabbitCounter_)
	{
		i = rand() % RABBIT_FIELD_SIZE;
		j = rand() % RABBIT_FIELD_SIZE;
		
		if(!field_[i][j])
			field_[i][j] = true;
		else 
			--rabbitCounter_;
	}
} 

void RabbitField::dump() const
{
	std::cout << "Current amount is " << rabbitCounter_ << "\nCurrent points is " << rabbitPoints_ << std::endl;
	
	for(int i = 0; i < RABBIT_FIELD_SIZE; ++i)
	{
		for(int j = 0; j < RABBIT_FIELD_SIZE; ++j)
		{
			std::cout << field_[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int RabbitField::counter() const
{
	return rabbitCounter_;
}

void RabbitField::born()
{
	srand(time(0));
	int i = 0;
	int j = 0;
	
	if(rabbitCounter_ == RABBIT_FIELD_SIZE * RABBIT_FIELD_SIZE)
		return;
		
	if(rabbitPoints_ < POINTS_TO_BORN_RABBIT)
		return;
		
	rabbitPoints_ -= POINTS_TO_BORN_RABBIT;

	while(true)
	{	
		i = rand() % RABBIT_FIELD_SIZE;
		j = rand() % RABBIT_FIELD_SIZE;
			
		if(!field_[i][j])
		{
			field_[i][j] = true;
			++rabbitCounter_;
			
			return;
		}
	}
}

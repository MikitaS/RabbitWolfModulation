#pragma once

#define INIT_RABBITS_AMOUNT 40
#define INIT_RABBITS_POINTS 20

#define INIT_WOLF_AMOUNT 20
#define INIT_WOLF_POINTS 20


#define RABBIT_FIELD_SIZE 15


#define POINTS_TO_BORN_RABBIT 3
#define POINTS_FOR_DEATH_RABBIT 2
#define POINTS_FOR_FOUND_FOOD_RABBIT 2
#define POINTS_TO_FEED_RABBIT 1

#define POINTS_TO_BORN_WOLF 3
#define POINTS_FOR_DEATH_WOLF 2
#define POINTS_FOR_FOUND_FOOD_WOLF 10
#define POINTS_TO_FEED_WOLF 1


#define AMOUNT_OF_CELLS_TO_SEARCH_RABBITS 15
#define AMOUNT_OF_CELLS_TO_SEARCH_WOLFS 10

int myrandom();

class RabbitField
{
public:
	RabbitField(int rabbitAmount, int rabbitPoints);
	~RabbitField() = default;
	
	int counter() const;
	void dump() const;
	
	void born();
	void die();
	void search();
	void feed();
	
	//!Return true if the rabbit exist on (X,Y) and kill him
	bool kill(int X, int Y);
	
private:
	int rabbitPoints_;
	int rabbitCounter_;
	bool field_ [RABBIT_FIELD_SIZE] [RABBIT_FIELD_SIZE];
};

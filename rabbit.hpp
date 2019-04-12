#pragma once

#define INIT_RABBITS_AMOUNT 1
#define INIT_RABBITS_POINTS 20

#define RABBIT_FIELD_SIZE 15

#define POINTS_TO_BORN_RABBIT 3
#define POINTS_FOR_DEATH_RABBIT 2
#define POINTS_FOR_FOUND_FOOD_RABBIT 2
#define POINTS_TO_FEED_RABBIT 1

#define AMOUNT_OF_CELLS_TO_SEARCH_RABBITS 15

int myrandom();//done

class RabbitField
{
public:
	RabbitField(int rabbitAmount, int rabbitPoints);//done
	~RabbitField() = default;//done
	
	int counter() const;//done
	void dump() const;//done
	
	void born();//done
	void die();//done
	void search();//done
	void feed();//done
	
private:
	int rabbitPoints_;
	int rabbitCounter_;
	bool field_ [RABBIT_FIELD_SIZE] [RABBIT_FIELD_SIZE];
};

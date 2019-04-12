#pragma once

#define INIT_RABBITS_AMOUNT 30
#define INIT_RABBITS_POINTS 20

#define RABBIT_FIELD_SIZE 10

#define POINTS_TO_BORN_RABBIT 3

class RabbitField
{
public:
	RabbitField(int rabbitAmount, int rabbitPoints);//done
	~RabbitField() = default;//done
	
	int counter() const;//done
	void dump() const;//done
	
	void born();//done
	void die();
	
private:
	int rabbitPoints_;
	int rabbitCounter_;
	bool field_ [RABBIT_FIELD_SIZE] [RABBIT_FIELD_SIZE];
};

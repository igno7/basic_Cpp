#include<iostream>
#include<string>

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		//Entity* e = this;
		this->y = y;
		this->x = x;
		Entity*  const &e = this;
	}

	int GetX() const
	{
		const Entity* e = this;
	}
};

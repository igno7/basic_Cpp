#include<iostream>
#include<string>
using namespace std;
class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

struct Vector3
{
	float x, z,y;
};

int main()
{
	int offset = (int)&((Vector3*)nullptr)->y;
	std::cout << offset << std::endl;

	Entity e;
	e.Print();

	Entity* ptr = &e;
	(*ptr).Print();
	Entity& entity=*ptr;
	entity.Print();
	ptr->Print();
	std::cin.get();
}
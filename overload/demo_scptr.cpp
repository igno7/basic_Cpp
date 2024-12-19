#include<iostream>
#include<string>
#include<memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "create Entity?" << std::endl;
	}
	~Entity()
	{
		std::cout << "destroy Entity." << std::endl;
	}

	void Print()
	{
		//
	}
};


class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		:m_Ptr(ptr)
	{
	}
	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

int main()
{
	{
		std::weak_ptr<Entity> e0;
		//std::shared_ptr<Entity> e1;
		{
		//std::unique_ptr<Entity>entity = std::make_unique<Entity>();
		std::shared_ptr<Entity>SharedEntity = std::make_shared<Entity>();
		//entity->Print();
		//ScopedPtr e(new Entity()); //implicit it still was created on the stack 
		//Entity* e1 = new Entity();
		e0 = SharedEntity;
		}
	}
	std::cin.get();
}
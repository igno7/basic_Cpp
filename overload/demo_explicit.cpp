#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		:m_Name(name),m_Age(-1) {}

	explicit Entity(int age)
		:m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//Printing
}
int main()
{
	Entity a("yuan");
	Entity b = (Entity)22;
	//PrintEntity(22);
	//PrintEntity("yzl"); //wrong, convert twice
	std::cin.get();
}
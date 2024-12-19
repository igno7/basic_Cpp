#include<iostream>

void swapr(int& a, int& b); //aliases
void swapp(int* a, int* b); //address
void swapv(int a, int b); //new

int main()
{
	int wallet1 = 300;
	int wallet2 = 500;
	std::cout << "wallet1=$" << wallet1 << std::endl;
	std::cout << "wallet2=$" << wallet2 << std::endl;

	std::cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);
	std::cout << "wallet1=$" << wallet1 << std::endl;
	std::cout << "wallet2=$" << wallet2 << std::endl;

	std::cout << "Using pointer to swap contents:\n";
	swapp(&wallet1, &wallet2);
	std::cout << "wallet1=$" << wallet1 << std::endl;
	std::cout << "wallet2=$" << wallet2 << std::endl;

	std::cout << "Trying to use passing by value to swap contents:\n";
	swapv(wallet1, wallet2);
	std::cout << "wallet1=$" << wallet1 << std::endl;
	std::cout << "wallet2=$" << wallet2 << std::endl;

}

void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int* a, int* b)
{
	int temp;
	temp=*a;
	*a = *b;
	*b = temp;
}

void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
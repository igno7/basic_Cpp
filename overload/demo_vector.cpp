#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

int main()
{
	Vertex* vertices = new Vertex[5];
	std::vector<Vertex> vertices1;
	vertices1.push_back({ 1,2,3});
	vertices1.push_back({4,5,6});

	for (int i = 0; i < vertices1.size(); i++)
		std::cout << vertices1[i] << std::endl;
    
	vertices1.erase(vertices1.begin() + 1);

	for (const Vertex& v : vertices1)
		std::cout << v << std::endl;

	
	vertices1.clear();

	
	//std::cout << vertices1;

	std::cin.get();
}
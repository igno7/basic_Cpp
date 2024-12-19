#include<iostream>
#include<string>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other)
		:m_Size(other.m_Size)
	{
		std::cout << "copied string" << std::endl;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}


	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String& string)
{
	//String copy = string;
	std::cout << string << std::endl;
}
int main()     
{
	String string = "yuanyyyy";
	String string2 = string;
	string2[2] = 'c';
	
	PrintString(string);
	PrintString(string2);

	double j = 15.0;
	double&& jref = 2.0 * j + 9.5;      
	//std::cout << string << std::endl;
	//std::cout << string2 << std::endl;
	std::cout << jref << std::endl;
	std::cin.get();


}
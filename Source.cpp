#include <iostream>
#include <ctime>

using namespace std;

template<typename> T
class Vector
{
	public:
	
	Vector();
	{
		vectorElements[100] = {0};
		sizeOfVector = 0;
	}
	
	Vector(int sizeOfVector)
	{
		for(int i = 0; i < sizeOfVector; i++)
		{
			vectorElements[i] = i + 1;
		}
	}
	
	Vector(int vectorElements[] int sizeOfVector);
	{
	
	}
	
	void push_back(int value)
	{
		vectorElements[sizeOfVector++] = value;
	}
	
	void pop_back()
	{
		vectorElements[--sizeOfVector];
	}
	
	T size(int vectorElements[])
	{
		return sizeOfVector;
	}
	
	const T at(int index)
	{
		return vectorElements[index];
	}
	
	const bool empty()
	{
	
	}
	void clear()
	{
		int count = 0;
		while(count < sizeOfVector)
		{	
			vectorElements[--sizeOfVector];
			count++;
		}
	}
				
	}
	void swap(Vector v2)
	{
		
	}
	
	private:
	int vectorElements[100];
	static int sizeOfVector;
}







	
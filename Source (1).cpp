#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(NULL));
	int x, y;
	T temp;
	for (int j = 0; j < 10; j++)
	{
		x = rand() % 10;
		y = rand() % 10;
		temp = v[x];
		v[x] = v[y];
		v[y] = temp;
	}
}	
		
		

int main()
{
	vector<int> v();
	for (int i = 0; i < 10; i++)
	{
		v[i] = i + 1;
	}
	
	cout << shuffle(v);
	
}


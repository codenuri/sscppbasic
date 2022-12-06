#include <iostream>

class Vector
{
	int* ptr;
	int  sz;
public:
	Vector(int s)
	{
		sz = s;
		ptr = new int[sz];
	}
	~Vector() { delete[] ptr; }
		
	int& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (newsize > sz)	// Ŀ���� ���
		{
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int) * sz);

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
		else
		{
			// �۾����� ���. 
		}
	}
	
};

int main()
{
	Vector v(4); 

	v.at(0) = 10;
	
	v.resize(8);

	std::cout << v.at(0) << std::endl; // 10
}
#include <iostream>

// Ŭ������ �ƴ� Ŭ������ ����� Ʋ�� �����մϴ�.

template<typename T> 
class Vector
{
	T* ptr;
	int  sz;
public:
	Vector(int s)
	{
		sz = s;
		ptr = new T[sz];
	}
	~Vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (newsize > sz)	
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T) * sz);
			
			delete[] ptr;

			ptr = tmp;
			sz = newsize;
		}
		else
		{
			
		}
	}
};

int main()
{
	
	Vector<int> v(4);	// �Լ� ���ø��� Ÿ���� �����Ҽ� ������!!
						// Ŭ���� ���ø��� Ÿ���� �����ؾ� �մϴ�.

	Vector<double> v2(10); // �ʱ� ũ�� 10�� double Ÿ���� ���� �迭
	v2.resize(20);			// ũ�⸦ 20���� ����..


	v.at(0) = 10;

	v.resize(8);

	std::cout << v.at(0) << std::endl; 
}
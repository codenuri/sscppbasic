#include <iostream>

// 클래스가 아닌 클래스를 만드는 틀을 제공합니다.

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
	
	Vector<int> v(4);	// 함수 템플릿은 타입을 생략할수 있지만!!
						// 클래스 템플릿은 타입을 전달해야 합니다.

	Vector<double> v2(10); // 초기 크기 10인 double 타입의 동적 배열
	v2.resize(20);			// 크기를 20으로 변경..


	v.at(0) = 10;

	v.resize(8);

	std::cout << v.at(0) << std::endl; 
}
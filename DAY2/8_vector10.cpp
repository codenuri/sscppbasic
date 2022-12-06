#include <iostream>
#include <vector> // 이미 C++ 표준에 vector가 있습니다.

// C++ 을 배우는 것!
// 1. vector 같은 클래스를 만들때 필요한 문법을 배우는것!
// 2. 이미 만들어진 vector 같은 라이브러리의 사용법을 배우는 것

int main()
{
	std::vector<int> v(10);

	v.at(0) = 10;	// at 도 있지만
	v[0] = 20;		// 이렇게 해도 됩니다.

	v.resize(20);	// 크기 변경도 가능
	//===========================================
	std::vector<int> v2; // 크기가 0인 동적 배열(vector)

	v2.push_back(1); // 이렇게 넣으면 크기가 자동 증가
	v2.push_back(1);
	v2.push_back(1);
	std::cout << v2.size() << std::endl; // 3
}
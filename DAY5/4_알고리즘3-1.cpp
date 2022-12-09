#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	auto ret1 = std::find_if(v.begin(), v.end(), foo);

	// 람다표현식 : 함수 이름 또는 주소가 필요한 자리에
	//	           함수 구현 자체를 전달할수 있는 기술
	//             C++11
	//             익명의 함수를 만드는 문법. 
	auto ret2 = std::find_if(v.begin(), v.end(),
							[](int n) { return n % 3 == 0;});

}


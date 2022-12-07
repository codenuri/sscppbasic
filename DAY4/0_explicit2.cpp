#include <iostream>
#include <string>
#include <vector>

void f1(std::string s) {}
void f2(std::vector<int> v) {}

int main()
{
	f1("hello");	// 나쁘지 않다!! 되야 한다!!
					// 된다.!!
					// std::string s = "Hello" 가 된다는것
	f2(10);		// 안되는 것이 좋다.!!
				// 안된다.!!
				// std::vector<int> v = 10 이 안된다는 것!!

	// string(const char*) 생성자는 explicit 가 아닙니다.
	std::string s1("hello");	// ok
	std::string s2 = "hello";	// ok

	// vector(int) 생성자는 explicit 입니다.
	std::vector<int> v1(10); // ok
	std::vector<int> v2 = 10; // error	
}
// 핵심
// => 인자가 한개인 생성자를 만들때는 explicit 를 붙일지 말지를
//    잘 판단하세요
// => 요즘은 대부분 붙이는 경우가 많습니다.
// => C++ 표준 라이브러리 사용시에도 위 string 과 vector 처럼
//    = 초기화가 안되는 경우도 있고, 되는 경우도 있으니 
//    사용할때 주의 하세요..

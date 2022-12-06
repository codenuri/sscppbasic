// 9_초기화리스트1-1
#include <iostream>
#include <string>

int main()
{
	// 대입 vs 초기화
	// primitive type 의 경우는 초기화와 대입은 거의 동일한 기계어 코드입니다.
	int n1 = 10; // 초기화.  만들면서 넣는것
	
	int n2;
	n2 = 10;	 // 대입.	만든후에 넣는것
	//===========================================
	// 하지만 user define type 은 초기화와 대입은 많이 다릅니다.

	std::string s1 = "kim"; // std::string s1("kim") 와 동일
							// => 생성자 한번의 호출로 값을 넣은 것!

	std::string s2;	// 1. 디폴트 생성자 호출
	s2 = "kim";		// 2. 대입 연산자( s2.operator=() 함수)를 호출해서
					//	  "kim" 을 넣은것
					// => 2회의 함수 호출이 발생하는 코드.!
}
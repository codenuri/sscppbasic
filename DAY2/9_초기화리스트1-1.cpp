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
	std::string s1 = "kim";

	std::string s2;
	s2 = "kim";
}
#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	std::map<std::string, std::string> m;

	m["mon"] = "월요일";
	m["tue"] = "화요일";

	// [] 연산자에 대해서
	// => 키값이 없으면 키값이 생성되게 됩니다.
	auto s = m["wed"];	// 1. wed 키값이 있으면 value 반환
						// 2. 없으면 이순간 생성
						//	  ("wed", "") 쌍으로 맵에 항목을 추가한것
	
	// 키값이 있는지 없는지를 조사하려면 find 를 사용하세요
	auto ret = m.find("wed");
	if (ret == m.end())
	{
		// 키값없음.
	}

	// C++20 부터는 좀더 편리하게 할수 있습니다.
	if ( m.contains("wed") )  
	{
	}
}






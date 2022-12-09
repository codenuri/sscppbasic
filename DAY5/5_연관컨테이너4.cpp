#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	// set 은 한개의 데이타(key) 를 보관
	std::set<std::string> s = {"BB", "AA", "CC"}; // 문자열들을 보관

	// map 은 key-value 쌍을 보관
	std::map<std::string, std::string> m = { {"mon", "월요일"}, 
											 {"tue", "화요일"} };

	// [] 연산자로 넣어도 됩니다.
	m["wed"] = "수요일";

	std::cout << m["mon"] << std::endl; // "월요일"
							// 위 코드는 "사전 처럼" 생각할수 있씁니다.
							// 그래서 map 을 다른 언어는
							// dictionary 라고도 합니다.
}






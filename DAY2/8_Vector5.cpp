#include <iostream>

// 객체지향 프로그래밍의 기본
// => 필요한 타입을 먼저 설계하자!!!

// "동적 배열" 이라는 타입을 설계해 봅시다.

class Vector
{

};

int main()
{
	// 목표!!
	Vector v(4); // 초기 크기 4

	v.at(0) = 10; // v[0] = 10

	v.resize(8);  // 크기를 8로 변경.
}
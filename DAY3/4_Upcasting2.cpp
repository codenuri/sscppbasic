// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

int main()
{
	// Upcasting 활용/장점
	std::vector<Dog*> v1; // Dog 객체만 보관 가능한 vector

	std::vector<Animal*> v2; // Animal 로 부터 파생된 모든 동물을 보관가능
							// 동종을 보관하는 컨테이너
}

// Upcasting 활용 2
//void NewYear(Dog* p)	// Dog 만 전달 가능한 함수
void NewYear(Animal* p) // 모든 동물을 전달 가능한 함수.
{
	++(p->age);
}
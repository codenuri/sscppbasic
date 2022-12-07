// 5_가상함수3

class Animal
{
public:
	virtual void Cry() {}
};

class Dog : public Animal
{
public:
	// 가상함수 재정의시
	// => virtual 을 붙여도 되고 안붙여도 됩니다.
	// => 안붙여도 virtual 입니다.
	// => 붙이는 것이 가독성에 좋습니다.
	virtual void Cry() {} 
};

class Cat : public Animal
{
public:
	// 가상함수 재정의시 함수 이름을 잘못 적으면
	// => 에러가 아닙니다.
	// => 다른 가상함수를 추가한것!
	// virtual void CRY() {}

	// 이 문제를 해결하기 위해 C++11 에서 override 키워드 도입됩니다.
	// 가상함수 재정의시 꼭 override 붙이세요
	virtual void CRY() override {}	// 기반 클래스에 "CRY"가 없으면에러
};


int main()
{

}
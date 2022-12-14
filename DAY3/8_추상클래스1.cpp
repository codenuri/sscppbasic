// 3_추상클래스 - 168(216)page

// 추상 클래스 : 순수가상함수가 한개 이상 있는 클래스
// 특징        : 객체를 만들수 없다.
// 의도        : 특정 멤버 함수를 반드시 만들어야 한다고 지시하는것!!!
//				만들지 않으면 해당 타입은 사용할수 없다는 것.. 
class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상함수(pure virtual function)
							 // => 함수 구현부 가 없고 "=0" 으로 표기
};

class Rect : public Shape
{
public:
	// Shape 의 순수 가상함수인 Draw() 의 구현부를
	// 제공하지 않으면 : Rect 도 추상 클래스
	// 제공하면        : Rect는 추상 클래스가 아니다.
	void Draw() override {}
};

int main()
{
//	Shape s; // error. 추상 클래스는 객체를 생성할수 없다.
	Rect  r; // ?
}



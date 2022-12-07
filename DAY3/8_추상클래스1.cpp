// 3_추상클래스 - 168(216)page

// 추상 클래스 : 순수가상함수가 한개 이상 있는 클래스
// 특징        : 객체를 만들수 없다.
class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상함수(pure virtual function)
							 // => 함수 구현부 가 없고 "=0" 으로 표기
};

class Rect : public Shape
{
public:
};
int main()
{
	Shape s; // error. 추상 클래스는 객체를 생성할수 없다.
	Rect  r; // ?
}



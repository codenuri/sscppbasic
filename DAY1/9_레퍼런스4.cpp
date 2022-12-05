
// 인자를 변경하지 않으려고 합니다.
// 다음중 좋은 코드는 ?

void f1(int n)			// good
{
	int a = n;
}
void f2(const int& r)	// bad
{
	int a = r;
}

int main()
{
	int n = 10;
	f1(n);
	f2(n);
}

// 함수 인자를 만드는 방법
// 1. 인자를 수정하는 경우
//    포인터나 reference 모두 좋은데, 요즘은 reference 권장
//	  void inc(int* p) { ++(*p);}
//	  void inc(int& r) { ++r; }

// 2. 함수의 인자를 수정하지 않은 경우 
// 
// A. primitive type 의 경우 : call by value 로 하세요
//    => 언어 자체가 제공하는 기본 타입(int, double, char등)
//    void f1(int n) {}

// B. user define type : const reference 로 하세요
//   => struct 또는 class 로 만든 타입
//   void f2(const Rect& r) {}

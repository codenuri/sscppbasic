// 정리
C++ 에서 배워야 하는 것들

1. C언어에도 있는 개념이지만 보다 발전된 내용들 - 1일차
   => 함수(inline, overloading, default, 후위반환, 함수 삭제), 
	  변수(auto, decltype, std::string), 
	  template, new, reference, 새로운 반복문(for) 


2. 객체지향은 결국 "필요한 타입을 만들자" 라는 것
   한개의 타입(class) 를 만들때 필요한 문법 
   => 안전하고, 사용하기 쉬운 타입을 만들기 위해..
   A. private, public 
   B. 생성자, 소멸자
   C. 멤버 초기화 리스트    Point(int a, int b) : x(a), y(b) {}

   D. static member data, static memer function

   E. const member function. 상수객체는 상수 멤버 함수만 호출가능하다.

   F. this, 멤버 함수의 호출원리

   G. 클래스 만들때, 헤더와 소스로 분리하는 방법. 파일 분할

   H. 복사 생성자 이야기. - 내일 


3. 상속 - 한개의 클래스가 아닌 여러개의 클래스를 사용해서
          프로그램 전체를 객체지향으로 만들어 가는 방법  - 

4. 기타 문법 (예외, 연산자 재정의등..) - 


5. C++ 표준라이브러리(STL) 사용법. 
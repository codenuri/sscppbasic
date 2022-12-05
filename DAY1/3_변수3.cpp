#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} // "int n = {3}"
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3);
	foo( { 3 } ); // C++11 부터 가능

	goo( p );	
	goo( { p } );
	goo( {1, 2} ); // C++11 부터 가능. Point pt = {1,2}
}






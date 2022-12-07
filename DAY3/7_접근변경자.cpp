// 7_접근변경자

class Base
{
public: 
	int data;
};

class Derived : public Base
{
};

int main()
{
	Derived d;
	d.data = 10;
}
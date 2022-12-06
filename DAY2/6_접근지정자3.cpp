#include <iostream>
#include <string>

// C++ 코딩 관례
class  Person
{
private:
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
	int get_age() { return age; }
};

// C#, java, swift 등의 언어
class  Person
{
	private std::string name;
	private int  age;

	public void set_age(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}

	public int get_age() { return age; }
};
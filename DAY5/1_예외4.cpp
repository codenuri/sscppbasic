#include <iostream>
#include <string>

// 예외를 위한 클래스를 설계 합니다.
class file_not_found
{
	std::string filename;
	std::string directory;
	// 그위에.. 실패에 대한 다양한 정보를 알려 줄수 있도록
	// 다양한 멤버(데이타, 함수)를 제공합니다.
public:
	file_not_found(const std::string& s) : filename(s) {}
};
class stack_overflow { };
class invalid_url {};

// 아래 함수의 경우는
// => 3가지 이유로 실패 할수 있습니다.
int db_backup()
{
	if (1)
	{
		throw file_not_found("a.txt"); // 임시객체형태로 전달
	}
	else if (2)
	{
		throw stack_overflow();
	}
	else if (3)
	{
		throw invalid_url();
	}
	return 100;
}

int main()
{
	try
	{
		int ret = db_backup(); 

	}
	catch (const file_not_found& e)
	{
		std::cout << "파일 없음" << std::endl;
	}
	catch (const stack_overflow& e)
	{
		std::cout << "스택 부족" << std::endl;
	}
	catch (...) // 위에서 처리되지 않은 모든 예외
	{
		std::cout << "알수 없는 예외 발생" << std::endl;
	}


	std::cout << "main 계속 실행" << std::endl;
}

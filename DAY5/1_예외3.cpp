#include <iostream>

// 던져진 예외를 잡는 방법
// => try, catch

int db_backup()
{
	if (1)		
	{
		throw 1;
	}
	return 100;
}

int main()
{
	try
	{
		int ret = db_backup(); // 예외발생시, catch 구문으로 이동

		// .. 성공했을때 코드.. 
	}
	catch (int e)
	{
		// 발생된 예외 확인후..
		// 1. 해결할수 없다면, 사용자에게 알리고 프로그램 종료 : std::exit(-1)
		// 2. 예외의 원인을 해결했다면(프로그램을 종료시키지 않으면),
		//    프로그램을 계속 실행될수 있습니다.
		std::cout << "catch..." << std::endl;
	}

	std::cout << "main 계속 실행" << std::endl;
}

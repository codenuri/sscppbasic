#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	std::map<std::string, std::string> m;

	m["mon"] = "������";
	m["tue"] = "ȭ����";

	// [] �����ڿ� ���ؼ�
	// => Ű���� ������ Ű���� �����ǰ� �˴ϴ�.
	auto s = m["wed"];	// 1. wed Ű���� ������ value ��ȯ
						// 2. ������ �̼��� ����
						//	  ("wed", "") ������ �ʿ� �׸��� �߰��Ѱ�
	
	// Ű���� �ִ��� �������� �����Ϸ��� find �� ����ϼ���
	auto ret = m.find("wed");
	if (ret == m.end())
	{
		// Ű������.
	}

	// C++20 ���ʹ� ���� ���ϰ� �Ҽ� �ֽ��ϴ�.
	if ( m.contains("wed") )  
	{
	}
}






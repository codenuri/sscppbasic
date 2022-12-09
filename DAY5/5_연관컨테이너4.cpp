#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	// set �� �Ѱ��� ����Ÿ(key) �� ����
	std::set<std::string> s = {"BB", "AA", "CC"}; // ���ڿ����� ����

	// map �� key-value ���� ����
	std::map<std::string, std::string> m = { {"mon", "������"}, 
											 {"tue", "ȭ����"} };

	// [] �����ڷ� �־ �˴ϴ�.
	m["wed"] = "������";

	std::cout << m["mon"] << std::endl; // "������"
							// �� �ڵ�� "���� ó��" �����Ҽ� �־��ϴ�.
							// �׷��� map �� �ٸ� ����
							// dictionary ��� �մϴ�.
}






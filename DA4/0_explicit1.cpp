// explicit1.cpp

class Vector
{
public:
	// explicit ������ : ���� �ʱ�ȭ�� ��밡���ϰ� 
	//				    ���� �ʱ�ȭ�� ����Ҽ� ���� �ϴ� ����
	//				    C++98 ���� ���� �ִ� ������ ����.
	explicit Vector(int size) {}
};

void foo(Vector v) {}


int main()
{
	// �ٽ� 1. ���ڰ� int �Ѱ��� �����ڰ� �ִٸ� �Ʒ�ó�� ��ü�� ����� �ֽ��ϴ�
	Vector v1(10);		// ���� �ʱ�ȭ ( direct initialization )
	Vector v2 = 10;		// ���� �ʱ�ȭ ( copy initialization )
	Vector v3{ 10 };	// C++11 ���� �ʱ�ȭ ( direct initialization ) 
	Vector v4 = { 10 };	// C++11 ���� �ʱ�ȭ ( copy initialization )

	// �ٽ� 2. �Լ��� ���� ������ "���� �ʱ�ȭ" ���·� �ʱ�ȭ �˴ϴ�.
	foo(v1); // ok.. "Vector v = v1"  => "���� ������ ȣ��" �ε�
			 //						      ���� �����ڴ� explicit �ƴմϴ�.		  
	foo(10); // ok   "Vector v = 10"
			 // explicit ��� ����!!
}


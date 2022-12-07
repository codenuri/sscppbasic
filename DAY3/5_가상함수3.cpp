// 5_�����Լ�3

class Animal
{
public:
	virtual void Cry() {}
};

class Dog : public Animal
{
public:
	// �����Լ� �����ǽ�
	// => virtual �� �ٿ��� �ǰ� �Ⱥٿ��� �˴ϴ�.
	// => �Ⱥٿ��� virtual �Դϴ�.
	// => ���̴� ���� �������� �����ϴ�.
	virtual void Cry() {} 
};

class Cat : public Animal
{
public:
	// �����Լ� �����ǽ� �Լ� �̸��� �߸� ������
	// => ������ �ƴմϴ�.
	// => �ٸ� �����Լ��� �߰��Ѱ�!
	// virtual void CRY() {}

	// �� ������ �ذ��ϱ� ���� C++11 ���� override Ű���� ���Ե˴ϴ�.
	// �����Լ� �����ǽ� �� override ���̼���
	virtual void CRY() override {}	// ��� Ŭ������ "CRY"�� �����鿡��
};


int main()
{

}
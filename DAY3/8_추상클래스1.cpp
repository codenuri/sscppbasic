// 3_�߻�Ŭ���� - 168(216)page

// �߻� Ŭ���� : ���������Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡        : ��ü�� ����� ����.
class Shape
{
public:
	virtual void Draw() = 0; // ���� �����Լ�(pure virtual function)
							 // => �Լ� ������ �� ���� "=0" ���� ǥ��
};

class Rect : public Shape
{
public:
};
int main()
{
	Shape s; // error. �߻� Ŭ������ ��ü�� �����Ҽ� ����.
	Rect  r; // ?
}



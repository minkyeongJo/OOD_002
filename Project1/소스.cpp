#include<iostream>

class LetDebug
{
public:
	void printNum() 
	{
		/*
		short s1 = 32767;
		short s2 = 1;
		short s3 = (short)s1 + s2;
		std::cout << s3 << std::endl;
		*/

		/*
		unsigned short s1 = 32767;
		unsigned short s2 = 1;
		unsigned short s3 = (unsigned short)s1 + s2;
		std::cout << s3 << std::endl;
		*/

		uint16_t s1 = 32767; // ��ȣ�� ���� 16��Ʈ�� ���� ������ ��
		uint16_t s2 = 1; // ��ȣ�� �ʿ��ϴٸ� u����
		uint16_t s3 = (uint16_t)s1 + s2;
		std::cout << s3 << std::endl; 
	}
};

int main() 
{
	LetDebug* ��d = new LetDebug; // r��ü �����
	��d->printNum(); // printNum �Լ� ȣ��
	return 0;
	system("pause");
}

// short �ڷ����� -32768~32767�̹Ƿ� 32767�� 1�� ���ϸ� -32768�̵�!
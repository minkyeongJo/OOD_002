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

		uint16_t s1 = 32767; // 부호가 없는 16비트의 수를 만들라는 뜻
		uint16_t s2 = 1; // 부호가 필요하다면 u떼기
		uint16_t s3 = (uint16_t)s1 + s2;
		std::cout << s3 << std::endl; 
	}
};

int main() 
{
	LetDebug* ㅣd = new LetDebug; // r객체 만들기
	ㅣd->printNum(); // printNum 함수 호출
	return 0;
	system("pause");
}

// short 자료형은 -32768~32767이므로 32767에 1을 더하면 -32768이됨!
#include<stdio.h> 

int main(void) { 
	//int main(void){ 함수의 몸체(body) } int - 출력형태 | main - 함수이름 | (void) - 입력형태
	//int main(void) : 프로그램이 시작할 때 외부에서 전달되는 인수에 영향을 받지 않으며 단독적으로 프로그램을 실행한다.
	printf("hello world! \n");

	return 0;
}
//	3x + 4 = y   x에 2를 대입하면 y는 얼마인가? 10이다. x는 입력 y는 출력이라 한다.
//	적절한 입력과 그에 따른 출력이 존재하는 것을 가르켜 '함수(function)'이라 한다.

int main2(void) {
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	return 0;
	//printf 함수는 첫 번쨰 인자로 전달된 문자열을 출력한다.
}

int main3(void) {
	printf("My age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	return 0;
}




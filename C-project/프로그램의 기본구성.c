#include<stdio.h> 
int main(void) {
	printf("hello everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);

	printf("my age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("good \nmorning \neverybody\n");

	//문제 1 (숫자를 %d를 이용, 이름 홍길동, 나이 20살, 사는 곳 번지수 123-456)
	printf("이름: 홍길동 \n나이: %d살 \n번지수: 123-456\n");

	//문제 2 (숫자 %d로 표현 4x5 = 20, 7x9 = 63을 출력)
	printf("%d x %d = %d\n%d x %d = %d\n", 4, 5, 20, 7 ,9 ,63);

	//변수와 연산자
	//int 정수의 저장이 가능한 메모리 공간을 할당
	//num 그 메모리 공간의 이름
	int num;
	num = 20; //대입 연산자 
	printf("%d\n", num);

	//int num1, num2;
	int num3 = 30, num4 = 40;
	printf("num1 = %d, num2 = %d\n", 10, 20);

	printf("num3: %d, num4: %d\n", num3, num4);

	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, result);
	
	//다양한 연산자 
	int num5 = 9, num6 = 2;
	printf("%d+%d=%d \n", num5, num6, num5 + num6);
	printf("%d-%d=%d \n", num5, num6, num5 - num6);
	printf("%dx%d=%d \n", num5, num6, num5 * num6);
	printf("%d÷%d=%d \n", num5, num6, num5 / num6);
	printf("%d÷%d의 너미지=%d \n", num5, num6, num5 % num6);

	//복합 대입 연산자 *=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |=	
	int num7 = 2, num8 = 4, num9 = 6;
	num7 += 3;
	num8 *= 4;
	num9 %= 5;
	printf("result: %d, %d, %d \n", num7, num8, num9);
	
	int num10 = +2;
	int num11 = -4;

	num10 = -num10;
	printf("num10: %d\n", num10);
	num11 = -num11;
	printf("num11: %d\n", num11);

	return 0;
}

int main(void) {
	//증가, 감소 연산자 
	// ++num 값1 증가 후 속한 문장 진행, num++ 속한 문장 진행 후 값1 증가 
	// --num 값1 감소 후 속한 문장 진행, num-- 속한 문장 진행 후 값1 감소 
	
	int num1 = 12, num2 = 12;
	printf("num1: %d\n", num1);
	printf("num1++: %d\n", num1++);
	printf("num1: %d\n", num1);

	printf("num2: %d\n", num2);
	printf("num2++: %d\n", ++num2);
	printf("num2: %d\n", num2);

	int num3 = 10;
	int num4 = num3-- + 2;

	printf("num3: %d\n", num3);
	printf("num4: %d\n", num4);


	return 0;

}